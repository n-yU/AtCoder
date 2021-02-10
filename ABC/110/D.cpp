#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int mod=1e9+7;
int N;

map<int,int> pf(int m) {
  map<int,int> r;
  for(int i=2; i*i<=m; i++)
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

ll cmb(ll b) {
  ll i, x=1, y=1;
  for(i=b+N-1; i>N-1; i--) {
    x *= i;
    x %= mod;
  }
  for(i=2; i<=b; i++) {
    y *= i;
    y %= mod;
  }
  return x * modinv(y,mod) % mod;
}

int main() {
  int M;
  ll s=1;
  map<int,int> x;
  cin >> N >> M;
  x = pf(M);
  for(pair<int,int> p : x) {
    s *= cmb(p.second);
    s %= mod;
  }
  cout << s << endl;
}
