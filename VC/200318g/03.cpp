#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int p;
    string S;
    cin >> S;
    rep(i,S.size()-5) {
        string t = S.substr(i,6);
        if(t == "HAGIYA") {
            p = i;
            break;
        }
    }

    rep(i,S.size())
        if(i != p)
            cout << S.at(i);
        else {
            cout << "HAGIXILE";
            i += 5;
        }
    cout << endl;
}