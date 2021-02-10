const int INF=1e9+7;

struct Edge {
  int to;
  int weight;
  Edge(int t, int w) : to(t), weight(w) { }
};
using Graph = vector<vector<Edge>>;

int n;
vector<int> d;

void dijkstra(Graph &G, int x) {
  int i;
  priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
  for(i=0; i<n; i++)
    d.at(i) = INF;
  d.at(x) = 0;
  pq.push(make_pair(0,x));

  while(!pq.empty()) {
    pair<int,int> p = pq.top();
    pq.pop();
    int v = p.second;

    if(d.at(v) < p.first)
      continue;
    for(i=0; i<G[v].size(); i++) {
      Edge e = G[v][i];
      if(d.at(e.to) > d.at(v) + e.weight) {
        d.at(e.to) = d.at(v) + e.weight;
        pq.push(make_pair(d.at(e.to), e.to));
      }
    }
  }
}
