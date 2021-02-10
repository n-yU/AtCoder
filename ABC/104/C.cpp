#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
	int D,G,r=INF;
	cin >> D >> G;
	vector<int> p(D),c(D),s(D);

	rep(i,D) {
		cin >> p.at(i) >> c.at(i);
		s.at(i) = p.at(i)*(i+1)*100 + c.at(i);
	}
	
	rep(i,(int)pow(2,D)-1) {
		int tq=0,ts=0,m=-1;
		rep(j,D)
			if(i>>j & 1) {
				tq += p.at(j);
				ts += s.at(j);
			} else
				m = j;

		if(ts >= G) {
			r = min(r,tq);
			continue;
		}

		rep(i,p.at(m)) {
			++tq;
			ts += (m+1)*100;
			if(i == p.at(m)-1)
				ts += c.at(m);
			if(ts >= G) {
				r = min(r,tq);
				break;
			}
		}
	}

	cout << r << endl;
}