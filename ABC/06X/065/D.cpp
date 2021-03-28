#include <bits/stdc++.h>
using namespace std;
using T3 = tuple<int,int,int>;

struct UnionFind {
  vector<int> p;
  vector<int> r;

  UnionFind(int n=1) {
    init(n);
  }

  void init(int n=1) {
    p.resize(n);
    r.resize(n);
    for(int i=0; i<n; i++)
      p[i]=i, r[i]=1;
  }

  int root(int x) {
    if (p[x] == x)
      return x;
    return p[x] = root(p[x]);
  }

  bool issame(int x, int y) {
    return root(x) == root(y);
  }

  void merge(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y)
      return;
    if(r[x] < r[y])
      swap(x,y);
    p[y] = x;
    r[y] += r[x];
    return;
  }
};

struct Edge {
    int a,b,ct;

    bool operator<(const Edge& o) const {
      return ct < o.ct;
    }
};

bool cpX(T3 a,T3 b) {
  return get<0>(a) < get<0>(b);
}

bool cpY(T3 a, T3 b) {
  return get<1>(a) < get<1>(b);
}

struct Graph {
  int N;
  vector<Edge> Es;

  int kruskal() {
    UnionFind uf(N);
    sort(Es.begin(), Es.end());
    int m=0,i;

    for(i=0; i<Es.size(); i++) {
      Edge e = Es.at(i);
      if(!uf.issame(e.a, e.b)) {
        m += e.ct;
        uf.merge(e.a, e.b);
      }
    }

    return m;
  }
};

int main() {
    int i;
    Graph G;
    cin >> G.N;
    vector<T3> vt(G.N);

    for(i=0; i<G.N; i++) {
      T3 t;
      cin >> get<0>(t) >> get<1>(t);
      get<2>(t) = i;
      vt.at(i) = t;
    }

    sort(vt.begin(), vt.end(), cpX);

    for(i=0; i<G.N-1; i++) {
      Edge e;
      e.a = get<2>(vt.at(i));
      e.b = get<2>(vt.at(i+1));
      e.ct = get<0>(vt.at(i+1))-get<0>(vt.at(i));
      G.Es.push_back(e);
    }

    sort(vt.begin(), vt.end(), cpY);

    for(i=0; i<G.N-1; i++) {
      Edge e;
      e.a = get<2>(vt.at(i));
      e.b = get<2>(vt.at(i+1));
      e.ct = get<1>(vt.at(i+1))-get<1>(vt.at(i));
      G.Es.push_back(e);
    }

    cout << G.kruskal() << endl;
}