#include <bits/stdc++.h>
using namespace std;

int dp[1010][1010];

int main() {
  int A,B,i,j;
  cin >> A >> B;
  vector<int> a(A), b(B);
  for(i=0; i<A; i++)
    cin >> a.at(i);
  for(i=0; i<B; i++)
    cin >> b.at(i);

  dp[A][B] = 0;
  for(i=A; i>=0; i--)
    for(j=B; j>=0; j--) {
      if(i==A && j==B)
        continue;
      if((i+j)%2 == 0) {
        if(i==A)
          dp[i][j] = dp[i][j+1]+b.at(j);
        else if(j==B)
          dp[i][j] = dp[i+1][j]+a.at(i);
        else
          dp[i][j] = max(dp[i+1][j]+a.at(i), dp[i][j+1]+b.at(j));
      } else {
        if(i==A)
          dp[i][j] = dp[i][j+1];
        else if(j==B)
          dp[i][j] = dp[i+1][j];
        else
          dp[i][j] = min(dp[i+1][j], dp[i][j+1]);
      }
    }

  cout << dp[0][0] << endl;
}
