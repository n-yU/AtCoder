#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int r=1000;
    string S,t;
    cin >> S;

    rep(i,S.size()-2) {
        t = S.substr(i,3);
        int x = stoi(t);
        r = min(r, abs(x-753));
    }

    cout << r << endl;
}