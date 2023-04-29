#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;
typedef long long ll;
typedef pair<ll,ll> P;

int main() {
	ll N,A,B,r=1;
	cin >> N;
	map<P,ll> m;
	vector<P> p(N);

	rep(i,N) {
		ll x;
		cin >> A >> B;
		x = gcd(A,B);
		A /= x;
		B /= x;
		p.at(i) = P(A,B);

		if(!m.count(p.at(i)))
			m[p.at(i)] = 1;
		else
			++m.at(P(A,B));
	}

	rep(i,N-1) {
		r *= 2;
		r %= INF;
	}
	r += N;

	rep(i,N) {
		ll t = 0, tt = 1;

		if(m.count(P(p.at(i).second,-p.at(i).first)))
			t += m.at(P(p.at(i).second,-p.at(i).first));
		if(m.count(P(-p.at(i).second,p.at(i).first)))
			t += m.at(P(-p.at(i).second,p.at(i).first));
		--m.at(P(p.at(i).first,p.at(i).second));

		cout << t << endl;

		rep(j,t) {
			tt *= 2;
			tt %= INF;
		}

		if(t == 0)
			tt = 0;

		r -= tt;
		r %= INF;

		cout << r << endl;
	}

	cout << r << endl;
}