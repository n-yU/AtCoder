#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  if(C<A-B)
    cout << 0;
  else
    cout << C-A+B;
  cout << endl;
}
