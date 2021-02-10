#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    vector<vector<char>> c(4, vector<char>(4));
    rep(i,4)
       rep(j,4)
            cin >> c.at(i).at(j);

    rep(i,4) {
        rep(j,4)
            cout << c.at(3-i).at(3-j) << " ";
        cout << endl;
    }
}