#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll f(ll x) {
  ll t=0;
  if(x%2!=0)
    t=0;
  else
    t=x;
  if((x+1)/2%2!=0)
    return 1^t;
  else
    return t;
}

int main() {
  ll A,B;
  cin >> A >> B;
  cout << (f(A-1)^f(B)) << endl;
}
