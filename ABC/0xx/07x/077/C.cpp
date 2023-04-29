#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    ll N,r=0;
    cin >> N;
    vector<ll> A(N),B(N),C(N),pB(N);

    rep(i,N)
        cin >> A.at(i);
    rep(i,N)
        cin >> B.at(i);
    rep(i,N)
        cin >> C.at(i);
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    rep(i,N)
        pB.at(i) = C.end()-upper_bound(C.begin(), C.end(), B.at(i));

    rep(i,N-1)
        pB.at(N-2-i) += pB.at(N-1-i);
    
    rep(i,N) {
        ll t = upper_bound(B.begin(), B.end(), A.at(i))-B.begin();
        if(t == N)
            continue;
        r += pB.at(t);
    }

    cout << r << endl;
}