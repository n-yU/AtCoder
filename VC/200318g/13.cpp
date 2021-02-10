#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s,t;
    cin >> s >> t;

    rep(i,t.size())
        if(t.substr(i,t.size()-i)+t.substr(0,i) == s) {
            cout << i << endl;
            return 0;
        }

    cout << -1 << endl;
}