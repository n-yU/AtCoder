#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
const ll MOD=1e9+7;

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

ll cmb(ll n, ll r) {
	ll a=1, b=1;

	rep(i,r) {
		a *= n-i;
		a %= MOD;
	}
	rep(i,r) {
		b *= i+1;
		b %= MOD;
	}

	return (a * modinv(b,MOD))%MOD;
}

int main() {
	ll W,H;
	cin >> W >> H;
	cout << cmb(W+H-2, W-1) << endl;
}