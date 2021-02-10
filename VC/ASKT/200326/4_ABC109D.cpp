#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef pair<int,int> P;

int main() {
	int H,W;
	cin >> H >> W;
	vector<vector<int>> a(H, vector<int>(W));
	vector<pair<P,P>> r;
	rep(i,H)
		rep(j,W)
			cin >> a.at(i).at(j);
	
	rep(i,H)
		rep(j,W) {
			if(i==H-1 && j==W-1)
				continue;

			if(!(i%2) && a.at(i).at(j)%2) {
				P p,q;
				--a.at(i).at(j);
				p = P(i+1,j+1);
				if(j < W-1) {
					++a.at(i).at(j+1);
					q = P(i+1,j+2);
				} else {
					++a.at(i+1).at(W-1);
					q = P(i+2, W);
				}
				r.push_back(make_pair(p, q));
			} else if(i%2 && a.at(i).at(W-1-j)%2)  {
				P p,q;
				--a.at(i).at(W-1-j);
				p = P(i+1,W-j);
				if(j < W-1) {
					++a.at(i).at(W-2-j);
					q = P(i+1,W-1-j);
				} else {
					++a.at(i+1).at(0);
					q = P(i+2, 1);
				}
				r.push_back(make_pair(p, q));
			}
		}
	
	cout << r.size() << endl;
	rep(i,r.size()) {
		cout << r.at(i).first.first << " " << r.at(i).first.second << " ";
		cout << r.at(i).second.first << " " << r.at(i).second.second << endl;
	}
}