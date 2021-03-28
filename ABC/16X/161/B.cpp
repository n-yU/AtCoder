#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,M,s=0,r=0;

	cin >> N >> M;
	vector<int> A(N);

	rep(i,N) {
		cin >> A.at(i);
		s += A.at(i);
	}

	rep(i,N)
		if(A.at(i) >= (double)s/(4*M))
			++r;

	cout << ((r>=M) ? "Yes" : "No") << endl;
}