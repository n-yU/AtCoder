#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
const int MOD = 1e9+7;

int main() {
    ll N,r=0;
    cin >> N;
    vector<ll> A(N);
    rep(i,N)
        cin >> A.at(i);
    
    rep(i,60) {
        ll c0=0,c1=0;
        rep(j,N) {
            if((A.at(j)>>i) & 1)
                c1++;
            else
                c0++;
        }
        r += (((1ll<<i)%MOD) * ((c0*c1)%MOD)) % MOD;
    }

    cout << r%MOD << endl;
}