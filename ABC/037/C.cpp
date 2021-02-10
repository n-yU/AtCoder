#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
typedef long long ll;

int main() {
    int N,K;
    cin >> N >> K;
    vector<ll> a(N),r(N-K+1,0);
    rep(i,N)
        cin >> a.at(i);
    
    rep(i,K)
        r.at(0) += a.at(i);
    
    rep(i,N-K)
        r.at(i+1) += r.at(i)-a.at(i)+a.at(i+K);
    
    rep(i,N-K)
        r.at(i+1) += r.at(i);
    cout << r.at(N-K) << endl;
}