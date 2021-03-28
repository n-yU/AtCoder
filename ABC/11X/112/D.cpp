#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    ll N,M,i;
    cin >> N >> M;
    vector<ll> d;

    for(i=1; i*i<=M; i++)
        if(M%i == 0) {
            d.push_back(i);
            d.push_back(M/i);
        }
    sort(d.begin(), d.end(), greater<int>());

    for(int x: d)
        if(x*N <= M) {
            cout << x << endl;
            return 0;
        }
}