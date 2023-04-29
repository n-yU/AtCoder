using Graph = vector<vector<int>>;
vector<int> c;

bool dfs(const Graph &G, int v, int cr=0) {
  c.at(v) = cr;
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
  int N,i;
  bool isBipartite = 1;
  cin >> N;
  Graph G(N);

  c.assign(N, -1);
  for(i=0; i<N; i++) {
    if(c.at(i) != -1)
      continue;
    if(!dfs(G, i))
      isBipartite = 0;
  }
}
