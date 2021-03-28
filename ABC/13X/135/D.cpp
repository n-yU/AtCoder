#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e9+7;

int main() {
  vector<vector<ll>> dp(100005, vector<ll>(13,0));
  int l,i,j,k;
  string S;
  cin >> S;
  l = S.size();

  dp.at(0).at(0) = 1;
  for(i=0; i<l; i++) {
    int c;
    if(S.at(i) == '?')
      c = -1;
    else
      c = S.at(i) - '0';

    for(j=0; j<10; j++)
      if(c==-1 || c==j)
        for(k=0; k<13; k++)
          dp.at(i+1).at((k*10+j)%13) += dp.at(i).at(k);

    for(j=0; j<13; j++)
      dp.at(i+1).at(j) %= mod;
  }

  cout << dp.at(l).at(5) << endl;
}
