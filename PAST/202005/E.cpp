#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef vector<vector<int>> Graph;

int main() {
	int N,M,Q;
	cin >> N >> M >> Q;
	vector<int> c(N);
	Graph g(N);

	rep(i,M) {
		int u,v;
		cin >> u >> v;
		--u, --v;
		g.at(u).push_back(v);
		g.at(v).push_back(u);
	}

	rep(i,N)
		cin >> c.at(i);
	
	rep(i,Q) {
		int q,x,y;
		cin >> q >> x;
		cout << c.at(--x) << endl;

		if(q == 1) {
			for(auto t : g.at(x))
				c.at(t) = c.at(x);
		} else {
			cin >> y;
			c.at(x) = y;
		}
	}
}