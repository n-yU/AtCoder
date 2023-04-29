#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
using Graph = vector<vector<int>>;
typedef pair<int,int> P;

int main() {
    int N,M,a,b,r=0;
    cin >> N >> M;
    Graph G(N);
    vector<P> p(M);

    rep(i,M) {
        cin >> a >> b;
        a--, b--;
        G.at(a).push_back(b);
        G.at(b).push_back(a);
        p.at(i) = P(a,b);
    }

    rep(i,M) {
        int c=0;
        queue<int> q;
        vector<bool> seen(N,0);
        q.push(0);

        while(!q.empty()) {
            int v = q.front();
            q.pop();
            seen.at(v) = 1;

            for(int nv : G.at(v)) {
                if((v==p.at(i).first && nv==p.at(i).second) || (v==p.at(i).second && nv==p.at(i).first))
                    continue;
                if(seen.at(nv))
                    continue;
                q.push(nv);
            }
        }

        rep(i,N)
            if(seen.at(i))
                c++;
        if(c != N)
            r++;
    }

    cout << r << endl;
}