#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
  ll A;
  int K;
  cin >> A >> K;
  if(K==0) {
    cout << 2000000000000-A;
  } else {
    ll s=A,d=0;
    while(s < 2e12) {
      d++;
      s += 1+s*K;
    }
    cout << d;
  }
  cout << endl;
}
