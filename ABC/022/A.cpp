#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,S,T,W,r;
	cin >> N >> S >> T >> W;
	r = (W>= S && W<=T);

	rep(i,N-1) {
		int A;
		cin >> A;

		W += A;
		if(W>= S && W<=T)
			++r;
	}

	cout << r << endl;
}