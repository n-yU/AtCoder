#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, i;
  cin >> N >> A;

  // ここにプログラムを追記
  for(i=0; i<N; i++) {
    char op;
    int B;
    cin >> op >> B;
    if(op == '+')
      A += B;
    else if(op == '-')
      A -= B;
    else if(op == '*')
      A *= B;
    else {
      if(B == 0)
        break;
      A /= B;
    }
    cout << i+1 << ":" << A << endl;
  }
  if(i != N)
    cout << "error" << endl;
}