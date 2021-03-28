#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
const int MOD=1e9+7;

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
    ll x=1,y=1;
    rep(i,r) {
        x *= n-i;
        x %= MOD;
        y *= r-i;
        y %= MOD;
    }

    return x * modinv(y, MOD) % MOD;
}

int main() {
    ll n,k,r;
    cin >> n >> k;

    if(k+1 >= n)
        r = cmb(n+n-1,n);
    else
        r = cmb(n+n-1,n)-cmb(k+k-1,k);
    if(r<0)
        r += MOD;

    cout << r << endl;
}