#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int mod=1e9+7;

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

ll cmb(int n, int k) {
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
  int n,k;
  cin >> n >> k;
  cout << cmb(n-1+k, n-1)<< endl;
}
