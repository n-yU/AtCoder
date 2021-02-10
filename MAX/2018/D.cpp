#include <bits/stdc++.h>
using namespace std;

int dp[10010][10010];
// i番目まで調べたときにjにいるための最小周回数

int main() {
  int N,M,L,X,i;
  cin >> N >> M >> L >> X;
  vector<int> a(N);
  for(i=0; i<N; i++)
    cin >> a.at(i);

  dp[0][0] = 0;
  for(i=0; i<N; i++)
    for(j=0; j<M; j++) {
      if(j-a.at(i)<0)
        dp[i+1][j] = min(dp[i][j], dp[i][M-j+a.at(i)]+1);
      else
        dp[i+1][j] = min(dp[i][j], dp[i][j-a.at(i)]);
    }

  cout << (dp[N][L]<=X)?"Yes":"No" << endl;
}
