#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,M;
	cin >> N >> M;
	vector<string> A(N),B(M);

	rep(i,N)
		cin >> A.at(i);
	rep(i,M)
		cin >> B.at(i);
	
	rep(i,N-M+1)
		rep(j,N-M+1) {
			rep(k,M)
				rep(l,M)
					if(B.at(k).at(l) != A.at(i+k).at(j+l))
						goto NO;

			cout << "Yes" << endl;
			return 0;

			NO:
			;
		}

	cout << "No" << endl;
}