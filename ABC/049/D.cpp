#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  vector<int> p;

  UnionFind(int N) : p(N) {
    for(int i=0; i<N; i++)
      p[i] = i;
  }

  int root(int x) {
    if (p[x] == x)
      return x;
    return p[x] = root(p[x]);
  }

  void unite(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    if (rx == ry)
      return;
    p[rx] = ry;
  }

  bool same(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
};

int main() {
  int N,K,L,i,p,q;
  cin >> N >> K >> L;
  UnionFind r(N), t(N);
  map<pair<int,int>,int> m;

  for(i=0; i<K; i++) {
    cin >> p >> q;
    r.unite(p-1,q-1);
  }
  for(i=0; i<L; i++) {
    cin >> p >> q;
    t.unite(p-1,q-1);
  }

  for(i=0; i<N; i++) {
    pair<int,int> p = make_pair(r.root(i), t.root(i));
    if(m.count(p))
      m.at(p)++;
    else
      m[p] = 1;
  }

  for(i=0; i<N; i++)
    cout << m.at(make_pair(r.root(i), t.root(i))) << " ";
  cout << endl;
}
