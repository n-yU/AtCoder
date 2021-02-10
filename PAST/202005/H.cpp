#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
	int N,L,T1,T2,T3,y=0;
	cin >> N >> L;
	set<int> x;
	vector<int> dp(L+10, INF);

	rep(i,N) {
		int t;
		cin >> t;
		x.insert(t);
	}
	cin >> T1 >> T2 >> T3;

	dp.at(0) = 0;
	rep(i,L) {
		int t=0;
		if(x.count(i))
			t = T3;
		dp.at(i+1) = min(dp.at(i+1), dp.at(i)+T1+t);
		dp.at(i+2) = min(dp.at(i+2), dp.at(i)+T1+T2+t);
		dp.at(i+4) = min(dp.at(i+4), dp.at(i)+T1+T2*3+t);
	}

	dp.at(L) = min(dp.at(L), dp.at(L-1) + (T1+T2)/2 + ((x.count(L-1)) ? T3 : 0));
	if(L > 1)
		dp.at(L) = min(dp.at(L), dp.at(L-2) + T1/2+T2+T2/2 + ((x.count(L-2)) ? T3 : 0));
	if(L > 2)
		dp.at(L) = min(dp.at(L), dp.at(L-3) + T1/2+T2*2+T2/2 + ((x.count(L-3)) ? T3 : 0));

	cout << dp.at(L) << endl;
}