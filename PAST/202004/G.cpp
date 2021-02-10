#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
typedef pair<char,ll> P;

int main() {
	vector<P> v;
	int Q,ix=0;
	cin >> Q;

	rep(i,Q) {
		int T;
		cin >> T;

		if(T == 1) {
			char C;
			ll X;
			cin >> C >> X;
			v.push_back(P(C,X));
		} else {
			ll D,r=0;
			map<char,ll> m;
			cin >> D;

			while(D>0 && ix<v.size()) {
				ll d;
				if(D > v.at(ix).second) {
					d = v.at(ix).second;
					if(m.count(v.at(ix).first))
						m.at(v.at(ix).first) += d;
					else
						m[v.at(ix).first] = d;
					++ix;
				} else {
					d = D;
					v.at(ix).second -= D;
					if(m.count(v.at(ix).first))
						m.at(v.at(ix).first) += d;
					else
						m[v.at(ix).first] = d;
				}

				D -= d;
			}

			for(auto p : m)
				r += p.second*p.second;

			cout << r << endl;
		}
	}	
}