#include <bits/stdc++.h>
using namespace std;

struct Edge {
  int to, weight;
  Edge(int t, int w) : to(t), weight(w) { }
};
using Graph = vector<vector<Edge>>;

int dp[100010];

int main() {
  int N,i,u,v,w;
  cin >> N;
  Graph G(N);
  queue<int> q;

  for(i=0; i<N-1; i++) {
    cin >> u >> v >> w;
    G[u-1].push_back(Edge(v-1, w));
    G[v-1].push_back(Edge(u-1, w));
  }
  dp[0] = 0;
  q.push(0);

  while(!q.empty()) {
    int v = q.front();
    q.pop();

    for(auto nv : G[v]) {
      if(nv.to==0 || dp[nv.to]!=0)
        continue;
      dp[nv.to] = dp[v]+nv.weight;
      q.push(nv.to);
    }
  }

  for(i=0; i<N; i++) {
    if(dp[i]%2 == 0)
      cout << 1;
    else
      cout << 0;
    cout << endl;
  }
}
