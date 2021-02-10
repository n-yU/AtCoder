#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int W;
    string S = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
    cin >> W;
    rep(i,S.size()) {
        if(i!=0 && i%W == 0)
            cout << endl;
        cout << S.at(i);
    }
    cout << endl;
}