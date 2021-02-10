#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int L,H,N,A;
	cin >> L >> H >> N;

	rep(i,N) {
		cin >> A;
		if(A > H)
			cout << -1;
		else
			cout << max(L-A, 0);
		cout << endl;
	}
}