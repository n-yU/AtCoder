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
      p[i]=i, r[i]=0;
  }

  int root(int x) {
    if (p[x] == x)
      return x;
    return p[x] = root(p[x]);
  }

  bool issame(int x, int y) {
    return root(x) == root(y);
  }

  bool merge(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    if (rx == ry)
      return false;
    if(r[x] < r[y])
      swap(x,y);
    if(r[x] == r[y])
      ++r[x];
    p[y] = x;
    return true;
  }
};
