#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string S;
    cin >> S;
    set<char> t;

    rep(i,S.size()) {
        if(t.count(S.at(i))) {
            cout << "no" << endl;
            return 0;
        }
        t.insert(S.at(i));
    }

    cout << "yes" << endl;
}