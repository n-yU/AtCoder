#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,M;
    ll r=0;
    cin >> N >> M;
    vector<ll> x(N),y(N),z(N);
    vector<vector<ll>> s(8, vector<ll>(N,0));

    rep(i,N)
        cin >> x.at(i) >> y.at(i) >> z.at(i);

    rep(i,8) {
        ll t=0;
        rep(j,N) {
            if(i & 1)
                s.at(i).at(j) += x.at(j);
            else
                s.at(i).at(j) -= x.at(j);
            if(i & 2)
                s.at(i).at(j) += y.at(j);
            else
                s.at(i).at(j) -= y.at(j);
            if(i & 4)
                s.at(i).at(j) += z.at(j);
            else
                s.at(i).at(j) -= z.at(j);
        }
        sort(s.at(i).begin(), s.at(i).end(), greater<ll>());
        rep(j,M)
            t += s.at(i).at(j);
        r = max(r,t);
    }

    cout << r << endl;
}