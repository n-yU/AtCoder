#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ll N,K,i,d=0,c=0;
    cin >> N >> K;
    vector<ll> a(N),t(N);

    for(i=0; i<N; i++)
        cin >> a.at(i);
    
    t.at(0) = a.at(0);
    for(i=1; i<N; i++)
        t.at(i) = a.at(i) + t.at(i-1);

    for(i=0; i<N; i++) {
        c += t.end()-lower_bound(t.begin(), t.end(), K+d);
        d = t.at(i);
    }

    cout << c << endl;
}