#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
const int MOD = 1e9+7;

int main() {
    ll N,r=1;
    cin >> N;

    rep(i,N) {
        r *= i+1;
        r %= MOD;
    }

    cout << r << endl;
}