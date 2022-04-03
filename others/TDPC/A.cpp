#include <bits/stdc++.h>
using namespace std;

bool dp[110][10010];

int main() {
  int N,i,j,c=0,m=0;
  cin >> N;
  vector<int> p(N);
  for(i=0; i<N; i++) {
    cin >> p.at(i);
    m+=p.at(i);
  }

  memset(dp, 0, sizeof(dp));
  dp[0][0] = true;

  for(i=0; i<N; i++)
    for(j=0; j<=m; j++) {
      dp[i+1][j] |= dp[i][j];
      if(j>=p.at(i))
        dp[i+1][j] |= dp[i][j-p.at(i)];
    }

  for(i=0; i<=m; i++)
    if(dp[N][i])
      c++;

  cout << c << endl;
}
