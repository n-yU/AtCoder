#include <bits/stdc++.h>
using namespace std;

int main() {
  int W,H,x,y,d=0;
  cin >> W >> H >> x >> y;

  if(x==W/2.0 && y==H/2.0)
    d=1;

  cout << (double)W*(double)H/2.0 << " " << d << endl;
}
