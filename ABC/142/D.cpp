#include <bits/stdc++.h>
using namespace std;

using ll=long long;

set<ll> pf(ll n) {
  set<ll> r;
  for(ll i=2; i*i<=n; i++) {
    if(n%i == 0)
      r.insert(n);
    while(n%i == 0)
      n /= i;
  }
  if(n != 1)
    r.insert(n);
  return r;
}

int main() {
  ll A,B;
  cin >> A >> B;
  ll g = __gcd(A,B);
  cout << pf(g).size()+1 << endl;
}
