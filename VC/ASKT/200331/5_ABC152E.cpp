#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
const ll MOD=1e9+7;

map<ll,int> primeFact(ll n) {
	map<ll,int> r;
	for(ll i=2; i*i<=n; i++)
		while(n%i == 0) {
			r[i]++;
			n /= i;
		}
	if(n != 1)
		r[n] = 1;
	return r;
}

ll modinv(ll a, ll m) {
	ll b=m, u=1, v=0;
	while(b) {
		ll t=a/b;
		a -= t*b; swap(a, b);
		u -= t*v; swap(u, v);
	}
	u %= m;
	if(u<0)
		u += m;
	return u;
}

int main() {
	ll N,x=1,s=0;
	cin >> N;
	vector<ll> A(N);
	map<ll,int> L;

	rep(i,N) {
		cin >> A.at(i);
		map<ll,int> t = primeFact(A.at(i));

		for(auto p : t)
			if(!L.count(p.first))
				L[p.first] = p.second;
			else
				L.at(p.first) = max(L.at(p.first), p.second);
	}

	for(auto p : L)
		rep(i,p.second) {
			x *= p.first;
			x %= MOD;
		}

	rep(i,N) {
		s += x * modinv(A.at(i), MOD);
		s %= MOD;
	}

	cout << s << endl;
}