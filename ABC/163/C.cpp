#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,A;
	cin >> N;
	vector<int> r(N,0);

	rep(i,N-1) {
		cin >> A;
		++r.at(A-1);
	}

	rep(i,N)
		cout << r.at(i) << endl;
}