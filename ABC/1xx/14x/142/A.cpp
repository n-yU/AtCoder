#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  double r;
  cin >> N;
  if(N==1)
    r = 1.0000000000;
  else if(N%2==0)
    r = 0.5000000000;
  else
    r = ((N/2)+1.0)/N;
  cout << setprecision(8) << r << endl;
}
