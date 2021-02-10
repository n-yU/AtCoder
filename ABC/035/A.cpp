#include <bits/stdc++.h>
using namespace std;

int main() {
  int W,H;
  cin >> W >> H;
  if(W/4*3==H)
    cout << "4:3";
  else
    cout << "16:9";
  cout << endl;
}
