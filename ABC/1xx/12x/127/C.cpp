#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M,i,x,y;
  cin >> N >> M;
  vector<int> L(M), R(M);
  for(i=0; i<M; i++)
    cin >> L.at(i) >> R.at(i);

  for(i=0; i<M; i++) {
    if(i==0) {
      x=L.at(i);
      y=R.at(i);
    } else {
      if(x<L.at(i))
        x = L.at(i);
      if(y>R.at(i))
        y = R.at(i);
    }
  }

  if(x>N || y<x) {
    cout << 0 << endl;
  	return 0;
  } else if(y>N)
    y=N;

  cout << y-x+1 << endl;
}
