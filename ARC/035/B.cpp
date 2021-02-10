#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int MOD=1e9+7;
typedef long long ll;

int main() {
	int N,p=-1;
	ll r=0,t=0,u=1,s=1,c=1;
	cin >> N;
	
	vector<int> T(N);
	rep(i,N)
		cin >> T.at(i);
	sort(T.begin(), T.end());

	rep(i,N) {
		t += T.at(i);
		r += t;

		if(p!=T.at(i)) {
			s *= u;
			s %= MOD;
			u=1, c=1;
			p = T.at(i);
		} else {
			u *= ++c;
			u %= MOD;
		}
	}

	s *= u;
	s %= MOD;
	cout << r << endl << s << endl;
}