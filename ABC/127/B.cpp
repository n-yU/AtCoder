#include <bits/stdc++.h>
using namespace std;

int main() {
  int r,D,i;
  vector<int> x(11);
  cin >> r >> D >> x.at(0);

  for(i=0; i<10; i++) {
    x.at(i+1) = r*x.at(i)-D;
    cout << x.at(i+1) << endl;
  }
}
