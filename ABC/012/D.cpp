#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
    int N,M,a,b,t,r=INF;
    cin >> N >> M;
    vector<vector<int>> d(N, vector<int>(N,INF));

    rep(i,M) {
        cin >> a >> b >> t;
        --a, --b;
        d.at(a).at(b) = t;
        d.at(b).at(a) = t;
    }

    rep(i,N)
        d.at(i).at(i) = 0;

    rep(k,N)
        rep(i,N)
            rep(j,N)
                d.at(i).at(j) = min(d.at(i).at(j), d.at(i).at(k)+d.at(k).at(j));

    rep(i,N) {
        int tr = 0;
        rep(j,N)
            tr = max(tr, d.at(i).at(j));
        r = min(r, tr);
    }
    cout << r << endl;
}