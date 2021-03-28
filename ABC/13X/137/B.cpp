#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, X, i;
  cin >> K >> X;
  for(i=X-K+1; i<X+K; i++)
    cout << i << " ";
  cout << endl;
}
