#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  vector<int> p;

  UnionFind(int n=1) {
    init(n);
  }

  void init(int n=1) {
    p.resize(n);
    for(int i=0; i<n; i++)
      p[i]=i;
  }

  int root(int x) {
    if (p[x] == x)
      return x;
    return p[x] = root(p[x]);
  }
  
  void merge(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    if (rx == ry)
      return;
    p[ry] = rx;
  }
};

int dp[110][10010];

int main() {
  int n,m,W,i,j,a,b;
  cin >> n >> m >> W;
  vector<int> w(n),v(n),tw(n,0),tv(n,0),nw,nv;
  UnionFind uf(n);

  for(i=0; i<n; i++)
    cin >> w.at(i) >> v.at(i);

  for(i=0; i<m; i++) {
    cin >> a >> b;
    uf.merge(a-1,b-1);
  }

  for(i=0; i<n; i++) {
    int r = uf.root(i);
    tw.at(r) += w.at(i);
    tv.at(r) += v.at(i);
  }

  for(i=0; i<n; i++)
    if(tw.at(i) != 0) {
      nw.push_back(tw.at(i));
      nv.push_back(tv.at(i));
    }

  for(i=0; i<=W; i++)
    dp[0][W] = 0;

  for(i=0; i<nw.size(); i++)
    for(j=0; j<=W; j++) {
      if(j >= nw.at(i))
        dp[i+1][j] = max(dp[i][j-nw.at(i)]+nv.at(i), dp[i][j]);
      else
        dp[i+1][j] = dp[i][j];
    }
  
  cout << dp[nw.size()][W] << endl;
}