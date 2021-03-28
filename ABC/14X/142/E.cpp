#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;
int dp[4097];

int main() {
  int N,M,i,j,t;
  cin >> N >> M;
  vector<int> a(M), b(M);
  vector<vector<bool>> c(M, vector<bool>(N,0));

  for(i=0; i<M; i++) {
    cin >> a.at(i) >> b.at(i);
    for(j=0; j<b.at(i); j++) {
      cin >> t;
      c.at(i).at(t-1) = 1;
    }
  }

  for(i=0; i<(1<<N); i++)
    dp[i] = INF;
  dp[0] = 0;

  for(i=0; i<M; i++) {
    t = 0;
    for(j=0; j<N; j++)
      if(c.at(i).at(j))
        t |= (1 << j);
    for(j=0; j<(1<<N); j++)
      dp[j|t] = min(dp[j|t], dp[j]+a.at(i));
  }

  cout << ((dp[(1<<N)-1]==INF) ? -1 : dp[(1<<N)-1]);
}
