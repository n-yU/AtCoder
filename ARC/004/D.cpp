#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int mod=1e9+7;

map<ll,ll> pf(ll m) {
  map<ll,ll> r;
  for(ll i=2; i*i<=m; i++)
    while(!(m%i)) {
      r[i]++;
      m /= i;
    }
  if(m!=1)
    r[m]++;
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

ll cmb(ll n, ll k) {
  int i;
  ll x=1, y=1;
  for(i=n; i>n-k; i--) {
    x *= i;
    x %= mod;
  }
  for(i=0; i<k; i++) {
    y *= i+1;
    y %= mod;
  }
  return x * modinv(y,mod) % mod;
}

int main() {
  ll N,M,i,s=1, x=1;
  cin >> N >> M;
  for(auto p : pf(abs(N))) {
    s *= cmb(p.second+M-1, p.second);
    s %= mod;
  }
  for(i=0; i<M-1; i++) {
    x *= 2;
    x %= mod;
  }
  cout << s * x % mod << endl;
}
