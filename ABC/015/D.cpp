#include <bits/stdc++.h>
using namespace std;

int dp[60][60][11000];

int main() {
  int W,N,K,i,j,k,a,b,w,v,r=0;
  cin >> W >> N >> K;
  vector<pair<int,int>> SS(N);
  for(i=0; i<N; i++) {
    cin >> a >> b;
    SS.at(i) = make_pair(a,b);
  }

  for(i=0; i<=K; i++)
    for(j=0; j<=W; j++)
      dp[0][i][j] = 0;

  for(i=0; i<N; i++) {
    w = SS.at(i).first;
    v = SS.at(i).second;
    for(j=0; j<K; j++)
      for(k=0; k<=W; k++) {
        dp[i+1][j+1][k] = dp[i][j+1][k];
        if(k>=w && dp[i][j][k-w]+v>dp[i+1][j+1][k])
          dp[i+1][j+1][k] = dp[i][j][k-w]+v;
      }
  }

  for(i=0; i<=K; i++)
    for(j=0; j<=W; j++)
      if(r < dp[N][i][j])
        r = dp[N][i][j];
  cout << r << endl;
}
