#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

ll modpow(ll a, ll n, ll mod) {
	ll r = 1;
	while(n > 0) {
		if(n & 1)
			r = r*a%mod;
		a = a*a%mod;
		n >>= 1;
	}
	return r;
}

int main() {
	ll N,z=0,A=0,B=0;
	string X;
	cin >> N >> X;
	vector<ll> f(N+1);

	f.at(0) = 0;
	rep(i,N) {
		ll x=i+1,c=0;
		rep(j,18)
			if(x & 1<<j)
				++c;
		f.at(x) = f.at(x%c)+1;
	}

	rep(i,N)
		z += (X.at(i) == '1');
	rep(i,N)
		if(X.at(i) == '1') {
			if(z != 1)
				A += modpow(2,N-i-1,z-1);
			B += modpow(2,N-i-1,z+1);
		}

	rep(i,N) {
		if(X.at(i) == '1') {
			if(z == 1)
				cout << 0;
			else
				cout << f.at((A-modpow(2,N-i-1,z-1))%(z-1))+1;
		} else
			cout << f.at((B+modpow(2,N-i-1,z+1))%(z+1))+1;
		cout << endl;
	}
}