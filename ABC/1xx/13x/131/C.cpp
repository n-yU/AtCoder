#include <bits/stdc++.h>
using namespace std;

int64_t lcm(int64_t x, int64_t y) {
  int64_t t;
  if(x<y) {
    t=x;
    x=y;
    y=t;
  }
  int64_t r=x*y,n=x%y;
  while(n!=0) {
    x=y;
    y=n;
    n=x%y;
  }
  return r/y;
}

int main() {
  int64_t A,B,C,D;
  cin >> A >> B >> C >> D;
  int64_t n=lcm(C,D);

  cout << B-A+1-(B/C-(A-1)/C+B/D-(A-1)/D-B/n+(A-1)/n) << endl;
}
