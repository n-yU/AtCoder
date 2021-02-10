#include <bits/stdc++.h>
using namespace std;

using ll=long long;
ll dp[2010][2010];

int main() {
  ll N,K,i,j,p;
  cin >> N >> K;
  vector<ll> a(N+1), r(N+1);
  a.at(0) = 0;
  r.at(0) = 0;
  for(i=0; i<N; i++) {
    cin >> a.at(i+1);
    r.at(i+1) = a.at(i+1) + r.at(i);
  }

  if(r.at(N)==K) {
    cout << 1 << endl;
    return 0;
  }

  for(i=0; i<=N; i++)
    for(j=0; j<=N; j++)
      (i+j==0)?dp[i][j]=0:dp[i][j]=K+10;

  for(i=0; i<N; i++)
    for(j=0; j<i+1; j++)
      if(dp[i][j] <= K) {
        dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
        if(i==0) {
          dp[1][1]=1;
        } else {
          p = dp[i][j]*r.at(i+1)/r.at(i)+1;
          if(p-dp[i][j] <= a.at(i+1))
            dp[i+1][j+1] = min(p, dp[i+1][j+1]);
        }
      }

  for(i=N; i>=0; i--)
    if(dp[N][i] <= K)
      break;
  cout << i << endl;
}
