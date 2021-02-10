#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef pair<int,int> P;
int dh[4] = {1, 0, -1 ,0};
int dw[4] = {0, 1, 0, -1};
const int INF=1e9+7;

int main() {
	int H,W;
	cin >> H >> W;
	vector<string> f(H);
	vector<vector<int>> d(H, vector<int>(W,INF));
	queue<P> q;
	P p;

	rep(i,H) {
		cin >> f.at(i);
		rep(j,W)
			if(f.at(i).at(j) == '#') {
				d.at(i).at(j) = 0;
				q.push(P(i,j));
			}
	}

	while(!q.empty()) {
		p = q.front();
		q.pop();

		rep(k,4) {
			int nh=p.first+dh[k], nw=p.second+dw[k];
			if(nh<0 || nw<0 || nh>=H || nw>=W || f.at(nh).at(nw)=='#' || d.at(nh).at(nw)!=INF)
				continue;
			d.at(nh).at(nw) = d.at(p.first).at(p.second)+1;
			q.push(P(nh,nw));
		}
	}

	cout << d.at(p.first).at(p.second) << endl;
}