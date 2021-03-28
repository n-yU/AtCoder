#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;
    
    rep(i,s.size())
        if(!(i%2))
            cout << s.at(i);
    cout << endl;
}