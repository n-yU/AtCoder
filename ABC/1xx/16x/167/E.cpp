#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
const ll MOD=998244353;

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
	ll N,M,K,x=1,r=0,p;
	cin >> N >> M >> K;

	rep(i,N-K) {
		x *= M;
		x %= MOD;
	}
	rep(i,K) {
		x *= M-1;
		x %= MOD;
	}

	cout << x << endl;

	rep(i,K) {
		x += M;
		x %= MOD;
	}

	cout << x << endl;
}