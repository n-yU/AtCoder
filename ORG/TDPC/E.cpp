#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int dp[10001][2][101];

int main() {
  int D,i,j,k,p,l;
  string N;
  cin >> D >> N;
  vector<int> dg;
  for(auto c : N)
    dg.push_back(c-'0');
  l = N.size();

  dp[0][0][0] = 1;
  for(i=0; i<l; i++)
    for(j=0; j<2; j++)
      for(k=0; k<D; k++)
        for(p=0; p<=(j ? 9 : dg.at(i)); p++) {
          dp[i+1][j || p<dg.at(i)][(k+p)%D] += dp[i][j][k];
          dp[i+1][j || p<dg.at(i)][(k+p)%D] %= mod;
        }

  cout << dp[l][0][0] + dp[l][1][0] - 1 << endl;
}
