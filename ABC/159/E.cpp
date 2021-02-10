#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
	int H,W,K,a=INF;
	string f;
	cin >> H >> W >> K;
	vector<vector<int>> w(H, vector<int>(W,0)), c(H, vector<int>(W,0));

	rep(i,H) {
		cin >> f;
		rep(j,W)
			if(f.at(j) == '1')
				w.at(i).at(j) = 1;
	}

	rep(i,H)
		rep(j,W)
			if(j == 0)
				c.at(i).at(j) = w.at(i).at(j);
			else
				c.at(i).at(j) = c.at(i).at(j-1)+w.at(i).at(j);

	rep(i,H-1)
		rep(j,W)
			c.at(i+1).at(j) += c.at(i).at(j);
	
	rep(i,1<<H-1) {
		vector<vector<int>> r;
		int x=0, p=-1;
		bool ok=1;

		rep(j,H-1)
			if(i & 1<<j) {
				r.push_back(vector<int>(W,0));
				rep(k,W)
					if(p == -1)
						r.at(r.size()-1).at(k) = c.at(j).at(k);
					else
						r.at(r.size()-1).at(k) = c.at(j).at(k)-c.at(p).at(k);
				p = j;
			}
		
		r.push_back(vector<int>(W,0));
		rep(k,W)
			if(p == -1)
				r.at(r.size()-1).at(k) = c.at(H-1).at(k);
			else
				r.at(r.size()-1).at(k) = c.at(H-1).at(k)-c.at(p).at(k);

		p = -1;
		rep(j,W) {
			int m=0;

			rep(k,r.size())
				m = max(m, ((p==-1) ? r.at(k).at(j) : r.at(k).at(j)-r.at(k).at(p)));
			if(m <= K)
				continue;

			p = j-1;
			if(p < 0) {
				ok = 0;
				break;
			}
			++x;
		}

		if(ok)
			a = min(a, (int)(x+r.size()-1));
	}

	cout << a << endl;
}