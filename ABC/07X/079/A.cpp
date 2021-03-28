#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int r = 1;
    string S;
    cin >> S;

    char p = S.at(0);
    rep(i,S.size()-1) {
        if(p == S.at(i+1))
            r++;
        else
            r=1;
        if(r>2)
            break;
        p = S.at(i+1);
    }
    
    cout << ((r>2) ? "Yes" : "No") << endl;
}