#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string S;
    cin >> S;
    set<char> t;

    rep(i,S.size())
        t.insert(S.at(i));
    
    rep(i,'z'-'a'+1)
        if(!t.count(i+'a')) {
            cout << (char)(i+'a') << endl;
            return 0;
        }
    cout << "None" << endl;
}