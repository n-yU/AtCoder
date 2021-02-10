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
};

int main() {
  int N,M,i,x,y,c=0;
  cin >> N >> M;
  vector<int> p(N);
  UnionFind uf(N+1);

  for(i=0; i<N; i++)
    cin >> p.at(i);
  for(i=0; i<M; i++) {
    cin >> x >> y;
    uf.unite(x,y);
  }

  for(i=0; i<N; i++)
    if(uf.root(i+1) == uf.root(p.at(i)))
      c++;
  cout << c << endl;
}
