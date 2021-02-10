#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
  int M,K,c=0;
  ll x=K;
  cin >> M >> K;

  while(x<M) {
    c++;
    x += x*2+1;
  }
  cout << c << endl;
}