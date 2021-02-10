#include <bits/stdc++.h>
using namespace std;

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

int main() {
  int k,i,p,a,b,c;
  cin >> n >> k;
  Graph G(n);
  d.resize(n);

  for(i=0; i<k; i++) {
    cin >> p;
    if(!p) {
      cin >> a >> b;
      dijkstra(G, a-1);
      if(d.at(b-1) == INF)
        d.at(b-1) = -1;
      cout << d.at(b-1) << endl;
    } else {
      cin >> a >> b >> c;
      G[a-1].push_back(Edge(b-1, c));
      G[b-1].push_back(Edge(a-1, c));
    }
  }
}
