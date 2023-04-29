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