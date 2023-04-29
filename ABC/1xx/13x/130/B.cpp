#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,X,i,c=0,p=0;
  cin >> N >> X;
  vector<int> L(N);
  for(i=0; i<N; i++)
    cin >> L.at(i);

  for(i=0; i<N; i++) {
    c = p+L.at(i);
    if(c>X)
      break;
    p = c;
  }

  cout << i+1 << endl;
}
