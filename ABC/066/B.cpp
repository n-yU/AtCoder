#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int r;
    string S;
    cin >> S;

    rep(i,S.size()) {
        if((S.size()-(i+1))%2)
            continue;
        bool ok=1;
        rep(j,(S.size()-(i+1))/2)
            if(S.at(j) != S.at(j+(S.size()-(i+1))/2))
                ok = 0;
        if(ok) {
            r = S.size()-(i+1);
            break;
        }
    }

    cout << r << endl;
}