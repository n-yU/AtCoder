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
  int N,Q,i,P,A,B;
  cin >> N >> Q;
  UnionFind uf(N);

  for(i=0; i<Q; i++) {
    cin >> P >> A >> B;
    if(P) {
      if(uf.same(A,B))
        cout << "Yes";
      else
        cout << "No";
      cout << endl;
    } else
      uf.unite(A,B);
  }
}
