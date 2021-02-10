#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  int mx, mn;
  
  mx = max(A, max(B, C));
  mn = min(A, min(B, C));
  
  cout << mx-mn << endl;
}