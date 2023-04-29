#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+7;
using ll=long long;

struct Edge {
  int to;
  ll weight;
  Edge(int t, ll w) : to(t), weight(w) { }
};
using Graph = vector<vector<Edge>>;

int N;
vector<ll> d;

void dijkstra(Graph &G, int x) {
  int i;
  priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
  for(i=0; i<N; i++)
    d.at(i) = INF;
  d.at(x) = 0;
  pq.push(make_pair(0,x));

  while(!pq.empty()) {
    pair<ll,int> p = pq.top();
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
  int M,T,i,a,b,c;
  ll m=0, rt;
  cin >> N >> M >> T;
  Graph G1(N), G2(N);
  vector<int> A(N);
  vector<ll> s(N);
  d.resize(N);

  for(i=0; i<N; i++)
    cin >> A.at(i);

  for(i=0; i<M; i++) {
    cin >> a >> b >> c;
    G1[a-1].push_back(Edge(b-1, c));
    G2[b-1].push_back(Edge(a-1, c));
  }

  dijkstra(G1, 0);
  for(i=0; i<N; i++)
    s.at(i) = d.at(i);
  dijkstra(G2, 0);
  for(i=1; i<N; i++)
    s.at(i) += d.at(i);

  for(i=0; i<N; i++) {
    rt = T-s.at(i);
    if(rt>0)
      m = max(m, rt*A.at(i));
  }

  cout << m << endl;
}
