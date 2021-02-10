#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF = 1e9+7;

int main() {
	int H,N;
	cin >> H >> N;
	vector<int> A(N),B(N);
	vector<vector<int>> dp(N+1, vector<int>(H+1,INF));
	rep(i,N)
		cin >> A.at(i) >> B.at(i);
	
	dp.at(0).at(0) = 0;
	rep(i,N)
		rep(j,H+1) {
			dp.at(i+1).at(j) = min(dp.at(i+1).at(j), dp.at(i).at(j));
			dp.at(i+1).at(min(j+A.at(i),H)) = min(dp.at(i+1).at(min(j+A.at(i),H)), dp.at(i+1).at(j)+B.at(i));
		}
	cout << dp.at(N).at(H) << endl;
}