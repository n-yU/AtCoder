#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,C;
    cin >> N >> C;
    vector<vector<int>> D(C, vector<int>(C));
    vector<vector<int>> cl(N, vector<int>(N));

    rep(i,C)
        rep(j,C)
            cin >> D.at(i).at(j);
    rep(i,N)
        rep(j,N)
            cin >> cl.at(i).at(j);
        
    // WIP
}