#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

struct Edge {
    int to;
    ll cost;
};
typedef vector<vector<Edge>> Graph;
vector<int> c;

void dfs(const Graph &G, int v, ll s) {
    c.at(v) = s%2;

    for(auto nv : G.at(v)) {
        if(c.at(nv.to) != -1)
            continue;
        dfs(G, nv.to, s+nv.cost);
    }
}

int main() {
    ll N,u,v,w;
    cin >> N;
    Graph G(N);

    rep(i,N-1) {
        cin >> u >> v >> w;
        --u, --v;
        Edge e1={v,w}, e2={u,w};
        G.at(u).push_back(e1);
        G.at(v).push_back(e2);
    }

    c.assign(N,-1);
    rep(i,N) {
        if(c.at(i) != -1)
            continue;
        dfs(G,i,0ll);
    }

    rep(i,N)
        cout << c.at(i) << endl;
}