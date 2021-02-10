#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int p=0;
    string s;
    cin >> s;

    rep(i,s.size())
        if(s.at(i) != 'B') {
            s.at(p) = s.at(i);
            ++p;
        } else {
            --p;
            p = max(p,0);
        }

    cout << s.substr(0,p) << endl;
}