#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+7;
struct Edge {
  int to;
  int weight;
  Edge(int t, int w) : to(t), weight(w) { }
};
using Graph = vector<vector<Edge>>;

vector<int> d;
int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};

void dijkstra(Graph &G, int x, int n) {
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
  int H,W,i,j,k,nh,nw,sh,sw,gh,gw;
  cin >> H >> W;
  vector<string> f(H);
  d.resize(H*W);
  Graph G(H*W);

  for(i=0; i<H; i++)
    cin >> f.at(i);
  for(i=0; i<H; i++)
    for(j=0; j<W; j++) {
      char c = f.at(i).at(j);
      if(c == 's') {
        sh=i; sw=j;
      }
      if(c == 'g') {
        gh=i; gw=j;
      }
      for(k=0; k<4; k++) {
        nh = i+dh[k];
        nw = j+dw[k];
        if(nh<0 || nw<0 || nh>=H || nw>=W)
          continue;
        if(f.at(nh).at(nw)=='#')
          G[i*W+j].push_back(Edge(nh*W+nw, 1));
        else
          G[i*W+j].push_back(Edge(nh*W+nw, 0));
      }
    }

  dijkstra(G, sh*W+sw, H*W);
  if(d.at(gh*W+gw) <= 2)
    cout << "YES";
  else
    cout << "NO";
  cout << endl;
}
