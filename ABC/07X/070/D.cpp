#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

struct Edge {
  int to;
  int weight;
  Edge(int t, int w) : to(t), weight(w) { }
};
using Graph = vector<vector<Edge>>;

int main() {
    int N,a,b,c,Q,K,x,y;
    queue<int> q;
    cin >> N;
    Graph G(N+1);
    vector<ll> d(N+1,-1);

    rep(i,N-1) {
        cin >> a >> b >> c;
        G.at(a).push_back(Edge(b,c));
        G.at(b).push_back(Edge(a,c));
    }

    cin >> Q >> K;
    q.push(K);
    d.at(K) = 0;

    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(auto nv : G.at(v)) {
            if(d.at(nv.to) != -1)
                continue;
            d.at(nv.to) = d.at(v) + nv.weight;
            q.push(nv.to);
        }
    }
    
    rep(i,Q) {
        cin >> x >> y;
        cout << d.at(x)+d.at(y) << endl;
    }
}