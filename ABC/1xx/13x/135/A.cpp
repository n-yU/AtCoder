#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, X;
  cin >> A >> B;

  if(abs(A-B)%2 == 0) {
    X = max(A,B)-abs(A-B)/2;
    cout << X << endl;
  } else
    cout << "IMPOSSIBLE" << endl;
}
