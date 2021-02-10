using Graph = vector<vector<int>>;

int main() {
  int i,N,M,a,b;
  cin >> N >> M;

  Graph G(N);
  for (i=0; i<M; i++) {
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<int> d(N, -1);
  queue<int> q;
  d[0] = 0;
  q.push(0);

  while(!q.empty()) {
    int v = q.front();
    q.pop();

    for (int nv : G[v]) {
      if (d[nv] != -1)
        continue;
      d[nv] = d[v] + 1;
      q.push(nv);
    }
  }
}
