#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    ll r=0;
    string S;
    cin >> S;
    int l=S.size();

    rep(i,1<<(l-1)) {
        ll p=S.at(0)-'0', t=0;
        rep(j,l-1)
            if(i & 1<<j)
                p = p*10+S.at(j+1)-'0';
            else {
                t += p;
                p = S.at(j+1)-'0';
            }
        r += t+p;
    }

    cout << r << endl;
}