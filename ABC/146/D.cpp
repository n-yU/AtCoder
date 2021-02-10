#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
using Graph = vector<vector<int>>;
typedef pair<int,int> P;

int main() {
    int N,a,b,mc=0;
    cin >> N;
    Graph g(N);
    vector<bool> seen(N,0);
    vector<P> ns(N-1);
    vector<int> rc(N,1),p(N);
    map<P,int> c;
    queue<int> q;

    rep(i,N-1) {
        cin >> a >> b;
        a--, b--;
        g.at(a).push_back(b);
        g.at(b).push_back(a);
        ns.at(i) = P(a,b);
    }

    p.at(0) = -1;
    q.push(0);

    while(!q.empty()) {
        int x = q.front();
        q.pop();
        seen.at(x) = 1;

        for(int nx : g.at(x)) {
            if(seen.at(nx))
                continue;

            if(rc.at(x) == p.at(x))
                rc.at(x)++;
            c[P(x,nx)] = rc.at(x);
            p.at(nx) = rc.at(x);
            mc = max(mc,p.at(nx));
            rc.at(x)++;
            q.push(nx);
        }
    }

    cout << mc << endl;
    rep(i,N-1)
        cout << c.at(ns.at(i)) << endl;
}