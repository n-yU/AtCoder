using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
  seen[v] = true;

  for (auto nv : G[v]) {
    if (seen[nv])
      continue;
    dfs(G, nv);
  }
}

int main() {
  int i,N,M,a,b;
  cin >> N >> M;

  Graph G(N);
  for (i=0; i<M; i++) {
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  seen.assign(N, false);
  dfs(G, 0);
}
