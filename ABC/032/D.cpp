#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll dp[210][200010];

int bs(vector<pair<ll,ll>> v, ll k) {
  ll l=0, r=(ll)v.size()-1;
  while(r >= l) {
    ll m = l+(r-l)/2;
    if(v.at(m).first == k)
      return m;
    else if(v.at(m).first > k)
      r = m-1;
    else
      l = m+1;
  }
  return (r>=0)?r:-1;
}

int main() {
  ll N,W,i,j;
  cin >> N >> W;
  vector<int> v(N),w(N);
  for(i=0; i<N; i++)
    cin >> v.at(i) >> w.at(i);
  ll mW=*max_element(w.begin(), w.end()), mV=*max_element(v.begin(), v.end());

  if(N<=30) {
    vector<pair<ll,ll>> VA, NVA;
    set<pair<ll,ll>> SA, SB;
    for(i=0; i<(1<<N/2); i++) {
      ll pv=0, pw=0;
      for(j=0; j<N/2; j++)
        if(i & (1<<j)) {
          pv += v.at(j);
          pw += w.at(j);
        }
      VA.push_back(make_pair(pw, pv));
    }
    sort(VA.begin(), VA.end());
    SA.insert(VA.at(0));
    for(i=1; i<VA.size(); i++)
      if(VA.at(i).second>VA.at(i-1).second)
        SA.insert(VA.at(i));
    for(auto s : SA)
      NVA.push_back(s);
    for(i=0; i<(1<<N-N/2); i++) {
      ll pv=0, pw=0;
      for(j=0; j<N-N/2; j++)
        if(i & (1<<j)) {
          pv += v.at(j+N/2);
          pw += w.at(j+N/2);
        }
      SB.insert(make_pair(pw, pv));
    }
    ll m=0;
    for(auto s : SB) {
      ll ix = bs(NVA,W-s.first);
      if(ix == -1)
        continue;
      ll r=s.second+NVA.at(ix).second;
      if(r>m)
        m=r;
    }
    cout << m << endl;
  } else if(mW <= 1000) {
    for(i=0; i<=N*mW; i++)
      dp[0][i] = 0;
    for(i=0; i<N; i++)
      for(j=0; j<=N*mW; j++)
        if(w.at(i) <= j)
          dp[i+1][j] = max(dp[i][j-w.at(i)]+v.at(i), dp[i][j]);
        else
          dp[i+1][j] = dp[i][j];
    cout << dp[N][W] << endl;
  } else {
    dp[0][0] = 0;
    for(i=1; i<=N*mV; i++)
      dp[0][i] = 1e9+7;
    for(i=0; i<N; i++)
      for(j=0; j<=N*mV; j++)
        if(v.at(i) <= j)
          dp[i+1][j] = min(dp[i][j-v.at(i)]+w.at(i), dp[i][j]);
        else
          dp[i+1][j] = dp[i][j];
    for(i=N*mV; i>=0; i--)
      if(dp[N][i] <= W)
        break;
    cout << i << endl;
  }
}
