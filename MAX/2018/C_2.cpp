#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;
vector<int> c;
int c1=0, c2=0;

bool dfs(const Graph &G, int v, int cr=0) {
  c.at(v) = cr;
  if(cr == 0)
    c1++;
  else
    c2++;

  for(auto nv : G[v]) {
    if(c.at(nv) != -1) {
      if(c.at(nv) == cr)
        return 0;
      continue;
    }

    if(!dfs(G, nv, 1-cr))
      return 0;
  }
  return 1;
}

int main() {
  int N,A,i;
  bool isBipartite = 1;
  cin >> N;
  Graph G(N);

  for(i=0; i<N; i++) {
    cin >> A;
    G[i].push_back(--A);
    G[A].push_back(i);
  }
  c.assign(N, -1);

  for(i=0; i<N; i++) {
    if(c.at(i) != -1)
      continue;
    if(!dfs(G, i))
      isBipartite = 0;
  }

  if(isBipartite)
    cout << max(c1, c2);
  else
    cout << -1;
  cout << endl;
}
