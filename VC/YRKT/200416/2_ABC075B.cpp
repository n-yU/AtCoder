#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int dh[8] = {1, 1, 1, -1, -1, -1, 0, 0};
int dw[8] = {0, 1, -1, 0, 1, -1, 1, -1};

int main() {
	int H,W;
	cin >> H >> W;
	vector<string> S(H);
	vector<vector<int>> c(H, vector<int>(W,0));

	rep(i,H)
		cin >> S.at(i);

	rep(i,H)
		rep(j,W)
			if(S.at(i).at(j) == '#')
				rep(k,8) {
					int nh=i+dh[k], nw=j+dw[k];
					if(nh>=H || nw>=W || nh<0 || nw<0 || S.at(nh).at(nw)=='#')
						continue;
					++c.at(nh).at(nw);
				}

	rep(i,H) {
		rep(j,W)
			if(S.at(i).at(j) == '.')
				cout << c.at(i).at(j);
			else
				cout << '#';
		cout << endl;
	}
}