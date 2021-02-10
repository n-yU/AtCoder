#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    vector<string> c(3);
    rep(i,3) {
        cin >> c.at(i);
        cout << c.at(i).at(i);
    }
    cout << endl;
}