#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    vector<string> S(1000);
    rep(i,1000)
        S.at(i) = to_string(i+1);
    sort(S.begin(), S.end());
    rep(i,1000)
        cout << S.at(i) << endl;
}