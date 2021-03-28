#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    ll N,A,B,m=0,l,r;
    cin >> N >> A >> B;
    vector<ll> h(N);
    rep(i,N) {
        cin >> h.at(i);
        m = max(m, h.at(i));
    }
    l=1, r=m/B;
    if(m%B)
        ++r;

    while(r-l > 1) {
        ll x=(l+r)/2, dc=0;
        rep(i,N) {
            ll rd=h.at(i)-B*x, ad=0;
            if(rd > 0) {
                ad = rd/(A-B);
                if(rd%(A-B))
                    ++ad;
            }
            dc += ad;
        }
        if(dc <= x)
            r = x;
        else
            l = x;
    }

    cout << r << endl;
}