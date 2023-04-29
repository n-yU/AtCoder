#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,r=1;
	bool ok = 1;
	cin >> N;
	vector<ll> A(N);

	rep(i,N) {
		cin >> A.at(i);
		if(A.at(i) == 0) {
			cout << 0 << endl;
			return 0;
		}
	}

	rep(i,N) {
		if((double)A.at(i) > (double)1e18/(double)r) {
			ok = 0;
			break;
		}
		r *= A.at(i);

		if(r > (ll)1e18) {
			ok = 0;
			break;
		}
	}

	cout << ((ok) ? r : -1) << endl;
}