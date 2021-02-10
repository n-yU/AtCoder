#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,W,b,w,v,rr=0;
	cin >> N >> W;
	vector<vector<ll>> x(4, vector<ll>());

	cin >> w >> v;
	b=w, x.at(0).push_back(v);

	rep(i,N-1) {
		cin >> w >> v;
		x.at(w-b).push_back(v);
	}

	rep(i,4) {
		x.at(i).push_back(0);
		sort(x.at(i).begin(), x.at(i).end(), greater<ll>());
		rep(j,x.at(i).size()-1) {
			x.at(i).at(j+1) += x.at(i).at(j);
		}
	}

	rep(i,x.at(0).size())
		rep(j,x.at(1).size())
			rep(k,x.at(2).size())
				rep(l,x.at(3).size()) {
					ll t = i*b+j*(b+1)+k*(b+2)+l*(b+3), r=0;
					if(t > W)
						continue;

					if(i != 0)
						r += x.at(0).at(i-1);
					if(j != 0)
						r += x.at(1).at(j-1);
					if(k != 0)
						r += x.at(2).at(k-1);
					if(l != 0)
						r += x.at(3).at(l-1);

					rr = max(rr, r);
				}

	cout << rr << endl;
}