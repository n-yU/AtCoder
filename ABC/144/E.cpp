#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ll i,N,K,sa=0,t,m,l=-1,r=1e12;
    cin >> N >> K;
    vector<ll> A(N), F(N);

    for(i=0; i<N; i++) {
        cin >> A.at(i);
        sa += A.at(i);
    }
    for(i=0; i<N; i++)
        cin >> F.at(i);

    sort(A.begin(), A.end());
    sort(F.begin(), F.end(), greater<>());

    while(r-l != 1) {
        m = (l+r)/2;

        t=0;
        for(i=0; i<N; i++)
            t += min(A.at(i), m/F.at(i));
        
        if(sa-t <= K)
            r = m;
        else
            l = m;
    }

    cout << r << endl;
}