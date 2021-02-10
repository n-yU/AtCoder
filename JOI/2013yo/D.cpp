#include <bits/stdc++.h>
using namespace std;

int dp[201][201];

int main() {
  int D,N,i,j,k,a,b,r=0;
  cin >> D >> N;
  vector<int> T(D+1), C(N);
  vector<pair<int,int>> F(N);
  for(i=0; i<D; i++)
    cin >> T.at(i);
  for(i=0; i<N; i++) {
    cin >> a >> b >> C.at(i);
    F.at(i) = make_pair(a,b);
  }

  for(i=0; i<N; i++)
    if(T.at(0)<F.at(i).first || T.at(0)>F.at(i).second)
      dp[1][i] = -1;
  for(i=2; i<=D; i++)
    for(j=0; j<N; j++)
      dp[i][j] = -1;

  for(i=1; i<D; i++)
    for(j=0; j<N; j++)
      for(k=0; k<N; k++)
        if(T.at(i)>=F.at(k).first && T.at(i)<=F.at(k).second && dp[i][j]!=-1)
          dp[i+1][k] = max(dp[i+1][k], dp[i][j]+abs(C.at(j)-C.at(k)));

  for(i=0; i<N; i++)
    if(dp[D][i] > r)
      r = dp[D][i];

  cout << r << endl;
}
