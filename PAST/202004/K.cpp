#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
const ll INF=1e14;

int main() {
	int N;
	string S;
	cin >> N;
	vector<ll> C(N),D(N);
	vector<vector<ll>> dp(N+1, vector<ll>(N+1,INF));

	cin >> S;
	rep(i,N)
		cin >> C.at(i);
	rep(i,N)
		cin >> D.at(i);

	dp.at(0).at(0) = 0;
	rep(i,N)
		rep(j,N) {
			if(S.at(i) == '(') {
				dp.at(i+1).at(j+1) = min(dp.at(i+1).at(j+1), dp.at(i).at(j));
				if(j > 0)
					dp.at(i+1).at(j-1) = min(dp.at(i+1).at(j-1), dp.at(i).at(j)+C.at(i));
			} else {
				dp.at(i+1).at(j+1) = min(dp.at(i+1).at(j+1), dp.at(i).at(j)+C.at(i));
				if(j > 0)
					dp.at(i+1).at(j-1) = min(dp.at(i+1).at(j-1), dp.at(i).at(j));
			}
			dp.at(i+1).at(j) = min(dp.at(i+1).at(j), dp.at(i).at(j)+D.at(i));
		}

	cout << dp.at(N).at(0) << endl;
}