#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M,C,i,j,ct=0,x;
  cin >> N >> M >> C;
  vector<int> B(M);
  vector<vector<int>> A(N, vector<int>(M));

  for(i=0; i<M; i++)
    cin >> B.at(i);
  for(i=0; i<N; i++) {
    int s=0;
    for(j=0; j<M; j++) {
      cin >> x;
      s+= x*B.at(j);
    }
    if(s+C>0)
      ct++;
  }
  cout << ct << endl;
}
