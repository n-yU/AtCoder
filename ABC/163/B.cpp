#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,M,A;
	cin >> N >> M;

	rep(i,M) {
		cin >> A;
		N -= A;

		if(N < 0) {
			cout << -1 << endl;
			return 0;
		}
	}

	cout << N << endl;
}