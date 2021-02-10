#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ll D,i,b,m=2e9+1;
    cin >> D;
    vector<ll> a(D,0);

    cin >> a.at(0);
    for(i=1; i<D; i++) {
        cin >> a.at(i);
        a.at(i) += a.at(i-1);
    }

    for(i=0; i<D; i++) {
        cin >> b;
        if(b <= a.at(i))
            m = min(m,b);
    }

    if(m == 2e9+1)
        m = -1;
    
    cout << m << endl;
}