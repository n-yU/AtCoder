#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
using Graph = vector<vector<int>>;

int main() {
    int N,Q,a,b,p,x;
    queue<int> q;
    cin >> N >> Q;
    Graph G(N);
    vector<int> c(N,0);
    vector<bool> seen(N,0);

    rep(i,N-1) {
        cin >> a >> b;
        a--, b--;
        G.at(a).push_back(b);
        G.at(b).push_back(a);
    }
    rep(i,Q) {
        cin >> p >> x;
        p--;
        c.at(p) += x;
    }

    q.push(0);
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        seen.at(x) = 1;

        for(auto nx : G.at(x)) {
            if(seen.at(nx))
                continue;
            c.at(nx) += c.at(x);
            q.push(nx);
        }
    }

    rep(i,N)
        cout << c.at(i) << " ";
    cout << endl;
}