#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF=1e15+7;
struct Edge {
  int to;
  ll weight;
  Edge(int t, ll w) : to(t), weight(w) { }
};
using Graph = vector<vector<Edge>>;

int n;
vector<ll> d;

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

int main() {
  int m,i,u,v,a,b,s,t;
  cin >> n >> m >> s >> t;
  d.resize(n);
  vector<ll> r(n);
  priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> res;

  Graph Gy(n), Gs(n);
  for(i=0; i<m; i++) {
    cin >> u >> v >> a >> b;
    Gy[u-1].push_back(Edge(v-1, a));
    Gy[v-1].push_back(Edge(u-1, a));
    Gs[u-1].push_back(Edge(v-1, b));
    Gs[v-1].push_back(Edge(u-1, b));
  }

  dijkstra(Gy, s-1);
  for(i=0; i<n; i++)
    r.at(i) = d.at(i);

  dijkstra(Gs, t-1);
  for(i=0; i<n; i++)
    r.at(i) += d.at(i);

  for(i=0; i<n; i++)
    res.push(make_pair(r.at(i), i));
  for(i=0; i<n; i++) {
    pair<ll,int> a = res.top();
    while(a.second < i) {
      res.pop();
      a = res.top();
    }
    cout << 1000000000000000 - a.first << endl;
  }
}
