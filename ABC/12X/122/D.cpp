#include <bits/stdc++.h>
using namespace std;
using ll=long long;

const ll mod=1e9+7;

int64_t modinv(int64_t x, int64_t m) {
  int64_t y=m, u=1, v=0;
  while(y) {
    int64_t t=x/y;
    x -= t*y;
    swap(x,y);
    u -= t*v;
    swap(u,v);
  }
  u %= m;
  if(u<0)
    u+=m;
  return u;
}

ll P(int n) {
  ll r=1;
  for(int i=0; i<n; i++) {
    r*=(i+1);
    r%=mod;
  }
  return r;
}

ll C(int n, int r) {
  return P(n)*modinv(P(r)*P(n-r),mod)%mod;
}

int main() {
  int N,i;
  ll r=1,y;
  cin >> N;
  for(i=0; i<N; i++) {
    if(i==N-3)
     y=r;
    r*=4;
    r%=mod;
  }
  //並び替えで成立するパターンを要検討
  // AGC, GAC, ACGだけではない

  ll x = r-(3*y*C(N-2,1));
  if(x<0)
    x+=mod;
  cout << x << endl;
}S
