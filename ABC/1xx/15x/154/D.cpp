#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    double N,K,t,s=0,m=0;
    cin >> N >> K;
    vector<double> p(N);

    rep(i,N) {
        cin >> t;
        p.at(i) = t*(t+1)/(2*t);
    }

    rep(i,K)
        s += p.at(i);
    m = s;
    rep(i,N-K) {
        s -= p.at(i);
        s += p.at(i+K);
        m = max(s,m);
    }
    cout << setprecision(10) << m << endl;
}