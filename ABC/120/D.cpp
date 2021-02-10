#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(i=0; i<n; i++)

struct UnionFind {
  vector<ll> p;
  vector<ll> sz;

  UnionFind(ll n) : p(n), sz(n,1LL) {
    for(ll i=0; i<n; i++)
      p.at(i) = i;
  }

  ll root(ll x) {
    if(p.at(x) == x)
      return x;
    return p.at(x) = root(p.at(x));
  }

  void unite(ll x, ll y) {
    ll rx=root(x), ry=root(y);
    if(rx == ry)
      return;
    if(sz.at(rx) < sz.at(ry))
      swap(rx,ry);
    sz.at(rx) += sz.at(ry);
    p.at(ry) = rx;
  }

  ll size(ll x) {
    return sz.at(root(x));
  }
};

int main() {
  ll N,M,i,A,B,nd1,nd2;
  cin >> N >> M;
  vector<pair<ll, ll>> g(M);
  vector<ll> as(M);
  as.at(M-1) = N*(N-1)/2;

  for(i=0; i<M; i++) {
    cin >> A >> B;
    g.at(i).first = A;
    g.at(i).second = B;
  }

  UnionFind uf(N);

  for(i=M-2; i>=0; i--) {
    nd1 = g.at(i+1).first-1;
    nd2 = g.at(i+1).second-1;
    if(uf.root(nd1) == uf.root(nd2))
      as.at(i) = as.at(i+1);
    else {
      as.at(i) = as.at(i+1)-uf.size(nd1)*uf.size(nd2);
      uf.unite(nd1, nd2);
    }
  }

  REP(i,M)
    cout << as.at(i) << endl;
}
