#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    ll N,s=0,r=1e15,t=0;
    cin >> N;
    vector<int> a(N);

    rep(i,N) {
        cin >> a.at(i);
        s += a.at(i);
    }

    rep(i,N-1) {
        t += a.at(i);
        s -= a.at(i);
        r = min(r, abs(s-t));
    }

    cout << r << endl;
}