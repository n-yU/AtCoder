#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,s=0,x=0,S1=0,j;
  cin >> N;
  vector<int> W(N);

  for(i=0; i<N; i++) {
    cin >> W.at(i);
    s+= W.at(i);
  }

  i=0;
  do {
    x += W.at(i);
    i++;
  } while(x<s/2);

  for(j=0; j<i; j++)
    S1 += W.at(j);

  cout << min(abs(2*S1-s),abs(2*(S1-W.at(j-1))-s)) << endl;
}
