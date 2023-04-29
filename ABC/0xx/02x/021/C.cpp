#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using Graph = vector<vector<int>>;
const int mod=1e9+7;
ll dp[110];

int main() {
  int N,a,b,M,i,x,y;
  cin >> N >> a >> b >> M;
  Graph G(N), DG(N);
  for(i=0; i<M; i++) {
    cin >> x >> y;
    x--; y--;
    G[x].push_back(y);
    G[y].push_back(x);
  }

  vector<int> d(N, -1);
  queue<int> q, nq;
  d.at(a-1) = 0;
  q.push(a-1);

  while(!q.empty()) {
    int v = q.front();
    q.pop();

    for(int nv : G[v]) {
      if(d.at(nv) != -1)
        continue;
      d.at(nv) = d.at(v)+1;
      q.push(nv);
    }
  }

  for(i=0; i<N; i++)
    for(int j : G[i])
      if(d.at(i)+1 == d.at(j))
        DG[i].push_back(j);

  dp[a-1] = 1;
  nq.push(a-1);
  while(!nq.empty()) {
    int v = nq.front();
    nq.pop();

    for(int nv : DG[v]) {
      if(!dp[nv])
        nq.push(nv);
      dp[nv] += dp[v];
      dp[nv] %= mod;
    }
  }

  cout << dp[b-1] << endl;
}
