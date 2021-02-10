#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  vector<int> p,s;

  UnionFind(int N) : p(N),s(N,1) {
    for(int i=0; i<N; i++) {
      p.at(i) = i;
    }
  }

  int root(int x) {
    if(p.at(x) == x)
      return x;
    return p.at(x) = root(p.at(x));
  }

  void unite(int x, int y) {
    int rx=root(x), ry=root(y);
    if(rx == ry)
      return;
    p.at(ry) = rx;
    s.at(rx) += s.at(ry);
    s.at(ry) = 0;
  }

  int size(int x) {
    return s.at(x);
  }
};

int main() {
  int N,i,A;
  cin >> N;
  UnionFind t(N);

  for(i=0; i<N; i++) {
    cin >> A;
    t.unite(i, A-1);
  }

  for(i=0; i<N; i++)
    if(t.size(i)%2!=0)
      break;

  if(i==N)
    cout << N/2;
  else
    cout << -1;
  cout << endl;
}
