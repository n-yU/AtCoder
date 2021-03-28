#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
  ll N,a=0,i;
  cin >> N;
  
  if(N%2 != 0)
    cout << 0;
  else {
    for(i=10; i<=N; i*=5)
      a += N / i;
    cout << a;
  }
  cout << endl;
}