#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
typedef pair<ll,ll> P;

int main() {
    ll N,K,s=0;
    cin >> N >> K;
    vector<P> ab(N);
    rep(i,N)
        cin >> ab.at(i).first >> ab.at(i).second;
    sort(ab.begin(), ab.end());

    rep(i,N) {
        s += ab.at(i).second;
        if(s >= K) {
            cout << ab.at(i).first << endl;
            return 0;
        }
    }
}