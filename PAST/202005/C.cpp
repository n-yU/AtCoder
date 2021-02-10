#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll A,R,N;
	cin >> A >> R >> N;

	rep(i,N-1) {
		A *= R;
		if(A > 1e9) {
			cout << "large" << endl;
			return 0;
		}
	}

	cout << A << endl;
}