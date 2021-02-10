#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,Q,s=0;
	cin >> N;
	map<ll,ll> m;

	rep(i,N) {
		ll t;
		cin >> t;
		if(m.count(t))
			++m.at(t);
		else
			m[t] = 1;
		s += t;
	}

	cin >> Q;
	rep(i,Q) {
		ll B,C;
		cin >> B >> C;
		
		if(m.count(B)) {
			s = s-B*m.at(B)+C*m.at(B);
			if(m.count(C))
				m.at(C) += m.at(B);
			else
				m[C] = m.at(B);
			m.erase(B);
		}
		cout << s << endl;
	}
}