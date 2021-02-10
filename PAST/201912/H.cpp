#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ll i,N,Q,c=0,p,x,a,sc=1e9+1,ac=1e9+1,scc=0,dsc=0,dac=0,t;
    cin >> N;
    vector<ll> C(N);
    for(i=0; i<N; i++) {
        cin >> C.at(i);
        ac = min(ac, C.at(i));
        if(i%2==0) {
            sc = min(sc, C.at(i));
            scc++;
        }
    }
    cin >> Q;

    for(i=0; i<Q; i++) {
        cin >> p;
        if(p == 1)
            cin >> x >> a;
        else
            cin >> a;
        x--;
        
        if(p==1) {
            t = C.at(x) - dac;
            if(x%2==0)
                t -= dsc;

            if(a <= t) {
                c += a;
                C.at(x) -= a;
                ac = min(ac, t-a);
                if(x%2==0)
                    sc = min(sc, t-a);
            }
        } else if(p==2) {
            if(a <= sc) {
                c += a * scc;
                dsc += a;
                sc -= a;
                ac = min(ac,sc);
            }
        } else {
            if(a <= ac) {
                c += a * N;
                dac += a;
                sc -= a;
                ac -= a;
            }
        }
    }

    cout << c << endl;
}