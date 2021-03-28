#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int mod=1e9+7;

ll P(ll n) {
  ll i,x=1;
  for(i=2; i<=n; i++) {
    x *= i;
    x %= mod;
  }
  return x;
}

int main() {
  ll N,M;
  int x;
  cin >> N >> M;
  if(M<N)
    swap(N,M);
  if(M-N>1)
    x = 0;
  else if(M==N)
    x = 2;
  else
    x = 1;
  
  cout << P(N)*P(M)*x%mod << endl;
}