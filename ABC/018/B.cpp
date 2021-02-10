#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S;
	int N,l,r;
	cin >> S >> N;

	rep(i,N) {
		cin >> l >> r;
		--l, --r;
		
		string t = S.substr(l,r-l+1);
		reverse(t.begin(), t.end());

		S = S.substr(0,l)+t+S.substr(r+1);
	}
	cout << S << endl;
}