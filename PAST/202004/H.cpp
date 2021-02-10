#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;
typedef pair<int,int> P;

int main() {
	int N,M;
	cin >> N >> M;
	vector<string> A(N);
	vector<vector<int>> c(N, vector<int>(M)), dp(N, vector<int>(M,INF));
	P g;

	rep(i,N) {
		cin >> A.at(i);
		rep(j,M) {
			char t = A.at(i).at(j);
			if(t == 'S') {
				c.at(i).at(j) = 0;
				dp.at(i).at(j) = 0;
			} else if(t == 'G') {
				c.at(i).at(j) = 10;
				g = P(i,j);
			} else
				c.at(i).at(j) = t-'0';
		}
	}

	rep(i,10)
		rep(j,N*M)
			rep(k,N*M)
				if(c.at(j/M).at(j%M)==i && c.at(k/M).at(k%M)==i+1) {
					int t = dp.at(j/M).at(j%M) + abs(j/M-k/M) + abs(j%M-k%M);
					dp.at(k/M).at(k%M) = min(dp.at(k/M).at(k%M), t);
				}

	if(dp.at(g.first).at(g.second) == INF)
		cout << -1;
	else
		cout << dp.at(g.first).at(g.second);
	cout << endl;
}