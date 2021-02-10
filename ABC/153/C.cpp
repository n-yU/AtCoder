#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    ll N,K,s=0;
    cin >> N >> K;
    vector<ll> H(N);
    rep(i,N)
        cin >> H.at(i);
    sort(H.begin(), H.end(), greater<int>());

    rep(i,min(N,K))
        H.at(i) = 0;
    
    rep(i,N)
        s += H.at(i);
    
    cout << s << endl;
}