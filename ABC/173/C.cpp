#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int H,W,K,r=0,s=0;
	cin >> H >> W >> K;
	vector<string> c(H);
	vector<int> a(H,0),b(W,0);

	rep(i,H) {
		cin >> c.at(i);
		rep(j,W)
			s += (c.at(i).at(j) == '#');
	}
	rep(i,H)
		rep(j,W)
			a.at(i) += (c.at(i).at(j) == '#');
	rep(i,W)
		rep(j,H)
			b.at(i) += (c.at(j).at(i) == '#');

	rep(i,1<<H) {
		int p=0;
		set<int> s1;
		rep(h,H)
			if(i & 1<<h) {
				p += a.at(h);
				s1.insert(h);
			}
		rep(j,1<<W) {
			int q=0;
			set<int> s2;
			rep(w,W)
				if(j & 1<<w) {
					q += b.at(w);
					s2.insert(w);
				}
			
			q += p;
			for(auto x : s1)
				for(auto y : s2)
					if(c.at(x).at(y) == '#')
						--q;
			if(s-q == K)
				++r;
		}
	}

	cout << r << endl;
}