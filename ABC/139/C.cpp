#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,s,c=0,m=0;
  cin >> N;
  vector<int> H(N);
  for(i=0; i<N; i++)
    cin >> H.at(i);
  s = H.at(0);

  for(i=1; i<N; i++) {
    if(s >= H.at(i)) {
      c++;
      s = H.at(i);
    } else {
      s = H.at(i);
      if(c>m)
        m = c;
      c = 0;
    }
  }

  if(c>m)
    m = c;
  cout << m << endl;
}
