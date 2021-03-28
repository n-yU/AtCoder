#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int N,M;
vector<vector<int>> p;

void dfs(vector<int> v) {
	if(v.size() == N)
		p.push_back(v);
	else
		for(int i=v.at(v.size()-1); i<=M; ++i) {
			vector<int> t = v;
			t.push_back(i);
			dfs(t);
		}
}

int main() {
	int Q,r=0;
	cin >> N >> M >> Q;
	vector<int> a(Q),b(Q),c(Q),d(Q);

	rep(i,Q)
		cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);
	
	rep(i,10) {
		vector<int> x;
		x.push_back(i+1);
		dfs(x);
	}

	rep(i,p.size()) {
		int t=0;
		rep(j,Q)
			if(p.at(i).at(b.at(j)-1)-p.at(i).at(a.at(j)-1) == c.at(j))
				t += d.at(j);
		r = max(r, t);
	}

	cout << r << endl;
}