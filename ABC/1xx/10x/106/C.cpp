#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    string S;
    char r='1';
    ll K,m=101;
    cin >> S >> K;

    rep(i,S.size())
        if(S.at(i) != '1') {
            r = S.at(i);
            m = i;
            break;
        }
        
    if(K<=S.size() && K-1<m)
        r = '1';

    cout << r << endl;
}