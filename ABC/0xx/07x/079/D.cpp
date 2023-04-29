#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int H,W,A,r=0;
    cin >> H >> W;
    vector<vector<int>> c(10, vector<int>(10));

    rep(i,10)
        rep(j,10)
            cin >> c.at(i).at(j);

    rep(k,10)
        rep(i,10)
            rep(j,10)
                c.at(i).at(j) = min(c.at(i).at(j), c.at(i).at(k)+c.at(k).at(j));

    rep(i,H)
        rep(j,W) {
            cin >> A;
            if(A==1 || A==-1)
                continue;
            r += c.at(A).at(1);
        }

    cout << r << endl;
}