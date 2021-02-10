#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const ll mod=998244353;

ll pow2(ll x, ll y) {
    ll a=1;
    for(ll i=0; i<y; i++) {
        a *= x;
        a %= mod;
    }
    return a;    
}

int main() {
    ll N,i,m=0,r=1;
    cin >> N;
    vector<ll> D(N),c(N,0);
    for(i=0; i<N; i++)
        cin >> D.at(i);
    for(ll x : D) {
        c.at(x)++;
        m = max(x,m);
    }

    if(!(D.at(0)==0 && c.at(0)==1)) {
        cout << 0 << endl;
        return 0;
    }

    for(i=1; i<=m; i++) {
        if(c.at(i) == 0) {
            r = 0;
            break;
        }
        r *= pow2(c.at(i-1), c.at(i));
        r %= mod;
    }

    cout << r << endl;
}