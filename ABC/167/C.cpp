#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
	int N,M,X,r=INF;
	cin >> N >> M >> X;
	vector<int> C(N);
	vector<vector<int>> A(N, vector<int>(M));

	rep(i,N) {
		cin >> C.at(i);
		rep(j,M)
			cin >> A.at(i).at(j);
	}

	rep(i,1<<N) {
		vector<int> al(M,0);
		int t = 0;
		bool ok = 1;

		rep(j,N)
			if(i & 1<<j) {
				t += C.at(j);
				rep(k,M)
					al.at(k) += A.at(j).at(k);
			}

		rep(j,M)
			if(al.at(j) < X)
				ok = 0;
		if(ok)
			r = min(r, t);
	}

	if(r == INF)
		cout << -1;
	else
		cout << r;
	cout << endl;
}