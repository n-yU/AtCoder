#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string W;
    cin >> W;
    rep(i,W.size()) {
        char t = W.at(i);
        if(t!='a' && t!='i' && t!='u' && t!='e' && t!='o')
            cout << t;
    }
    cout << endl;
}