#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef vector<vector<int>> Graph;
typedef long long ll;

int main() {
    int N,X,Y;
    cin >> N >> X >> Y;
    Graph G(N);
    vector<ll> r(N-1,0);

    rep(i,N-1) {
        G.at(i).push_back(i+1);
        G.at(i+1).push_back(i);
    }
    G.at(X-1).push_back(Y-1);
    G.at(Y-1).push_back(X-1);

    rep(i,N) {
        int t = 0;
        vector<int> d(N,-1);
        queue<int> q;
        q.push(i);
        d.at(i) = 0;

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            for(int nx : G.at(x)) {
                if(d.at(nx) != -1)
                    continue;

                d.at(nx) = d.at(x)+1;
                q.push(nx);
            }
        }

        rep(j,N-i)
            if(d.at(j+i) != 0)
                ++r.at(d.at(j+i)-1);
    }

    rep(i,N-1)
        cout << r.at(i) << endl;
}