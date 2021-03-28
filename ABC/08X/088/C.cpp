#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    vector<vector<int>> c(3, vector<int>(3));
    pair<int,int> d;
    bool ok = 1;
    rep(i,3)
        rep(j,3)
            cin >> c.at(i).at(j);
    
    d.first = c.at(0).at(1)-c.at(0).at(0);
    d.second = c.at(0).at(2)-c.at(0).at(1);

    rep(i,2) {
        if(c.at(i+1).at(1)-c.at(i+1).at(0)!=d.first)
            ok = 0;
        if(c.at(i+1).at(2)-c.at(i+1).at(1)!=d.second)
            ok = 0;
    }

    if(ok)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
}