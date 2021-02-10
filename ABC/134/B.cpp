#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,D,r;
  cin >> N >> D;
  r = N/(D*2+1);
  if(N%(D*2+1))
    r++;
  cout << r << endl;
}
