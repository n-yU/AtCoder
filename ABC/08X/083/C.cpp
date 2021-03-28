#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
  ll X, Y, a=1, c=0;
  cin >> X >> Y;

  while(a<=Y/X) {
    a*=2;
    c++;
  }

  cout << c << endl;
}
