#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int x2=1e9;

int main() {
  int x3,y3;
  ll S;
  cin >> S;
  x3 = (x2-S%x2) % x2;
  y3 = (S+x3) / x2;
  cout << "0 0 1000000000 1 " << x3 << " " << y3 << endl;
}
