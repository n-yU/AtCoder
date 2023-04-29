#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string O,E;
    cin >> O >> E;

    rep(i,min(O.size(),E.size()))
        cout << O.at(i) << E.at(i);
    if(O.size() > E.size())
        cout << O.at(O.size()-1);
}