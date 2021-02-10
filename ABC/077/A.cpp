#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string c1,c2;
    cin >> c1 >> c2;

    rep(i,3)
        if(c1.at(i) != c2.at(2-i)) {
            cout << "NO" << endl;
            return 0;
        }
    
    cout << "YES" << endl;
}