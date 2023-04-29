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
 
ll cmb(ll n, ll k) {
    ll i;
    if(k>n-k)
        k = n-k;
    ll r1=1, r2=1;
    for(i=n; i>n-k; i--)
        r1 = r1*i%mod;
    for(i=1; i<=k; i++)
        r2 = r2*i%mod;
    return r1 * modinv(r2,mod) % mod;
}

int main() {
    ll X,Y;
    cin >> X >> Y;

    if((X+Y)%3==0 && X-(X+Y)/3>=0 && Y-(X+Y)/3>=0) {
        cout << cmb((X+Y)/3, X-(X+Y)/3) << endl;
    } else {
        cout << 0 << endl;
    }
}