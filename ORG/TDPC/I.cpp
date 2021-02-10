#include <bits/stdc++.h>
using namespace std;

int dp[310][310];

int main() {
  string s;
  cin >> s;
  int i,j,k,n=s.size();

  for(i=3; i<=n; i++)
    for(j=0; j<=n-i; j++) {
      int l=j, r=j+i-1;
      for(k=l; k<r; k++)
        dp[l][r] = max(dp[l][r], dp[l][k]+dp[k+1][r]);
      if(dp[l+1][r-2]*3==r-l-2 && s.substr(l,1)+s.substr(r-1,2)=="iwi")
        dp[l][r] = max(dp[l][r], dp[l+1][r-2]+1);
      if(dp[l+2][r-1]*3==r-l-2 && s.substr(l,2)+s.substr(r,1)=="iwi")
        dp[l][r] = max(dp[l][r], dp[l+2][r-1]+1);
    }

  cout << dp[0][n-1] << endl;
}
