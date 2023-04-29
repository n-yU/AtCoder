#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,P,m=0,sp=0;
	string S,t,r="atcoder";
	cin >> N;

	rep(i,N) {
		cin >> S >> P;
		if(P > m) {
			m = P;
			t = S;
		}
		sp += P;
	}

	if(m > sp/2)
		r = t;
	cout << r << endl;
}