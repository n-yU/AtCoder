#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, i;
  cin >> N;

  cout << N/2+N%2 << endl;
  for(i=0; i<N/2; i++)
    cout << 2 << endl;
  if(N%2)
    cout << 1 << endl;
}
