#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
  int i;
  ll N,m,x,nx;
  cin >> N;
  for(i=0; i<5; i++) {
    cin >> x;
    if(i==0 || x<nx)
      nx = x;
  }

  m = N/nx+4;
  if(N%nx!=0)
    m++;
  cout << m << endl;
}
