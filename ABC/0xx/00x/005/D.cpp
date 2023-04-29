#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,Q,P;
    cin >> N;
    vector<vector<int>> D(N+1, vector<int>(N+1,0));
    vector<int> t((N+1)*(N+1), -1);

    rep(i,N)
        rep(j,N)
            cin >> D.at(i+1).at(j+1);
    rep(i,N+1)
        rep(j,N)
            D.at(i).at(j+1) += D.at(i).at(j);
    rep(i,N)
        rep(j,N+1)
            D.at(i+1).at(j) += D.at(i).at(j);

    rep(i,N)
        rep(j,N)
            rep(k,N-i)
                rep(l,N-j) {
                    int s = 0;
                    s += D.at(i+k+1).at(j+l+1);
                    s += D.at(i).at(j);
                    s -= D.at(i+k+1).at(j);
                    s -= D.at(i).at(j+l+1);
                    t.at((k+1)*(l+1)) = max(t.at((k+1)*(l+1)), s);
                }

    cin >> Q;
    rep(i,Q) {
        int r=0;
        cin >> P;
        rep(i, P+1)
            if(t.at(i) != -1)
                r = max(r, t.at(i));
        cout << r << endl;
    }
}