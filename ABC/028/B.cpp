#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string S;
    vector<int> t(6,0);
    cin >> S;

    rep(i,S.size())
        t.at(S.at(i)-'A')++;

    rep(i,5)
        cout << t.at(i) << " ";
    cout << t.at(5) << endl;
}