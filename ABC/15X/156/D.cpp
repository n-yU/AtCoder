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

ll cmb(int n, int r) {
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
    ll n,a,b,t,x=1,y,z;
    cin >> n >> a >> b;

    t = n/100000;
    if(t == 0) {
        rep(i,n) {
            x *= 2;
            x %= MOD;
        }
    } else {
        ll x1=1,x2=1,x3=1;
        rep(i,t) {
            x1 *= 2;
            x1 %= MOD;
        }
        rep(i,100000) {
            x3 *= x1;
            x3 %= MOD;
        }
        rep(i,n%100000) {
            x2 *= 2;
            x2 %= MOD;
        }
        x = (x3*x2)%MOD;
    }

    y = cmb(n,a);
    z = cmb(n,b);
    
    t = (x-y-z-1)%MOD;
    if(t < 0)
        t += MOD;
    cout << t << endl;
}