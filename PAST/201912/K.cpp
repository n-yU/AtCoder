#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main() {
    int N,Q,i,p,a,b,s;
    cin >> N;
    Graph G(N);

    for(i=0; i<N; i++) {
        cin >> p;
        if(p==-1){
            s = i;
            continue;
        }
        p--;
        G[p].push_back(i);
    }

    queue<int> q;
    q.push(s);
    vector<set<int>> d(N);
    d.at(s).insert(s);

    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(auto nv: G[v]) {
            if(d.at(nv).size() == 0) {
                d.at(nv) = d.at(v);
                d.at(nv).insert(nv);
                q.push(nv);
            }
        }
    }

    cin >> Q;
    for(i=0; i<Q; i++) {
        cin >> a >> b;
        a--;
        b--;
        if (d.at(a).count(b))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}