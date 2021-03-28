#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M,X,Y,i,j;
  cin >> N >> M >> X >> Y;
  vector<int> x(N), y(M);
  for(i=0; i<N; i++)
    cin >> x.at(i);
  for(i=0; i<M; i++)
    cin >> y.at(i);
  for(i=Y; i>X; i--) {
    for(j=0; j<N; j++)
      if(x.at(j) >= i)
        break;
    if(j!=N)
      continue;
    for(j=0; j<M; j++)
      if(y.at(j) < i)
        break;
    if(j!=M)
      continue;
    break;
  }

  if(i!=X)
    cout << "No War";
  else
    cout << "War";
  cout << endl;
}
