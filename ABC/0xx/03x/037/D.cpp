#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int MOD=1e9+7;
typedef long long ll;
typedef pair<int,int> P;

vector<int> dh={1, 0, -1, 0}, dw={0, 1, 0, -1};

int main() {
	int H,W;
	ll r = 0;
	cin >> H >> W;
	vector<vector<int>> a(H, vector<int>(W)),c(H, vector<int>(W,0));
	vector<pair<int,P>> m(H*W);

	rep(i,H)
		rep(j,W) {
			cin >> a.at(i).at(j);
			m.at(i*W+j) = make_pair(a.at(i).at(j), P(i,j));
		}
	sort(m.begin(), m.end(), greater<pair<int,P>>());

	for(auto p : m) {
		ll t = 1;
		rep(i,4) {
			int nh=p.second.first+dh.at(i), nw=p.second.second+dw.at(i), x=p.first;
			if(nh<0 || nw<0 || nh>=H || nw>=W)
				continue;
			if(a.at(nh).at(nw) > x)
				t += c.at(nh).at(nw);
		}

		t %= MOD;
		c.at(p.second.first).at(p.second.second) = t;
		r += t%MOD;
		r %= MOD;
	}

	cout << r << endl;
}