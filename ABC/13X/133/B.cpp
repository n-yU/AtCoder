#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,D,i,j,k,c=0;
  cin >> N >> D;
  vector<vector<int>> X(N, vector<int>(D));

  for(i=0; i<N; i++)
    for(j=0; j<D; j++)
      cin >> X.at(i).at(j);

  for(i=0; i<N; i++)
    for(j=i+1; j<N; j++) {
      int ds=0;
      for(k=0; k<D; k++)
        ds += pow((X.at(i).at(k)-X.at(j).at(k)),2);
      float dsf = sqrt(ds);
      if(dsf == (float)(int)dsf)
        c++;
    }

  cout << c << endl;
}
