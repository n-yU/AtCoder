#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
const int mod=1e9+7;

int main() {
    ll N,s=0;
    cin >> N;
    vector<ll> x(N),d(N,0),x(N);
    rep(i,N)
        cin >> x.at(i);
    
    rep(i,N-1) {
        d.at(i+1) = x.at(i+1)-x.at(i);
        s += d.at(i+1);
    }

    rep(i,N-1) {
        s -= d.at(i);
        d.at(i) = s;
    }

    rep(i,N)
        cout << d.at(i) << endl;
}