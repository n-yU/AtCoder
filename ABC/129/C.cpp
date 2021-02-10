#include <bits/stdc++.h>
using namespace std;

const int64_t mod=1e9+7;

int main() {
  int N,M,i,x;
  cin >> N >> M;
  set<int> a;
  for(i=0; i<M; i++) {
    cin >> x;
    a.insert(x);
  }

  vector<int64_t> dp(N+1);
  dp.at(0)=1;

  for(i=1; i<=N; i++)
    if(!a.count(i)) {
      dp.at(i) += dp.at(i-1);
      if(i!=1)
        dp.at(i) += dp.at(i-2);
      if(dp.at(i) == 0) {
        cout << 0 << endl;
        return 0;
      }
      dp.at(i) %= mod;
    } else
      dp.at(i) = 0;

  cout << dp[N] << endl;
}
