#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int MOD=1e9+7;
typedef long long ll;

vector<ll> f;

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

ll cmb(int n, int r) {
	ll x,y;

	if(r == 0)
		return 0;
	if(n == r)
		return 1;

	x = f.at(n-1) * modinv(f.at(n-r-1),MOD) % MOD;
	y = f.at(r-1);
	return x * modinv(y,MOD) % MOD;
}

int main() {
	int N,K;
	ll r=0;
	cin >> N >> K;

	vector<int> A(N);
	f.resize(N);

	f.at(0) = 1;
	rep(i,N-1) {
		f.at(i+1) = f.at(i)*(i+2);
		f.at(i+1) %= MOD;
	}
	
	rep(i,N)
		cin >> A.at(i);
	sort(A.begin(), A.end());

	rep(i,N) {
		if(i >= K-1)
			r += A.at(i) * cmb(i,K-1) % MOD;
		if(N-1-i >= K-1)
			r -= A.at(i) * cmb(N-1-i,K-1) % MOD;
		r %= MOD;
	}

	cout << r << endl;
}