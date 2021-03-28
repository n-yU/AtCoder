#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int mod=10007;
ll dp[1000010];

int main() {
  int n,i;
  cin >> n;

  dp[0]=0, dp[1]=0, dp[2]=1;
  for(i=3; i<n; i++) {
    dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    dp[i] %= mod;
  }
  cout << dp[n-1] << endl;
}
