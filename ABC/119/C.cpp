#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF = 1e9+7;

int main() {
	int N,A,B,C,mp=INF;
	cin >> N >> A >> B >> C;
	vector<int> l(N);

	rep(i,N)
		cin >> l.at(i);
	
	rep(i, 1<<N) {
		int tl;
		vector<int> t;

		rep(j,N)
			if(i>>j & 1)
				t.push_back(l.at(j));

		tl = t.size();
		if(tl < 3)
			continue;

		rep(j, pow(3,tl)) {
			vector<int> s;
			int x=j, ta=0, tb=0, tc=0, tmp, ua=-1, ub=-1, uc=-1;

			rep(k,tl) {
				s.push_back(x%3);
				x /= 3;
			}

			rep(k,tl)
				if(s.at(k) == 0) {
					ta += t.at(k);
					++ua;
				} else if(s.at(k) == 1) {
					tb += t.at(k);
					++ub;
				} else {
					tc += t.at(k);
					++uc;
				}
			if(ua<0 || ub<0 || uc<0)
				continue;

			tmp = (ua+ub+uc)*10 + abs(A-ta) + abs(B-tb) + abs(C-tc);
			mp = min(mp, tmp);
		}
	}

	cout << mp << endl;
}