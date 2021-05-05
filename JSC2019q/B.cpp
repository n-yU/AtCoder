#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e9+7;

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

ll cmb(ll K) {
  return K*(K-1)%mod * modinv(2,mod) % mod;
}

int main() {
  int N, i, j;
  ll K, r, t=0, s=0;
  cin >> N >> K;
  vector<int> A(N);

  for(i=0; i<N; i++)
    cin >> A.at(i);

  for(i=0; i<N-1; i++)
    for(j=i+1; j<N; j++)
      if(A.at(i)>A.at(j)) {
        t++; t%=mod;
      }

  for(i=0; i<N; i++)
    for(j=0; j<N; j++)
      if(A.at(i)>A.at(j)) {
        s++; s%=mod;
      }

  r = t*K % mod + cmb(K)*s % mod;
  cout << r%mod << endl;
}
