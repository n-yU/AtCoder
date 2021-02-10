#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,X,i,m=0,c=0;
  cin >> N >> X;
  vector<int> a(N);

  for(i=0; i<N; i++) {
    cin >> a.at(i);
    m = max(m, a.at(i));
  }

  for(i=0; i<N; i++)
    if(a.at(i)+X >= m)
      c++;

  cout << c << endl;
}