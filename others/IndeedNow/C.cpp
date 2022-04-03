#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll dp[110][110][110];

int main() {
  int N,M,i,j,k,a,b,c,x,y,z;
  ll w;
  cin >> N >> M;
  memset(dp, 0, sizeof(dp));
  dp[0][0][0] = 0;
  for(i=0; i<N; i++) {
    cin >> a >> b >> c >> w;
    dp[a][b][c] = max(dp[a][b][c], w);
  }

  for(i=0; i<=100; i++)
    for(j=0; j<=100; j++)
      for(k=0; k<=100; k++)
        dp[i][j][k] =
        max(max(dp[i][j][k], dp[i?(i-1):i][j][k]),
            max(dp[i][j?(j-1):j][k], dp[i][j][k?(k-1):k]));

  for(i=0; i<M; i++) {
    cin >> x >> y >> z;
    cout << dp[x][y][z] << endl;
  }
}
