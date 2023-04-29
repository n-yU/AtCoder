#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,mx=0,mn=1000,a;
    cin >> N;

    rep(i,N) {
        cin >> a;
        mx = max(mx,a);
        mn = min(mn,a);
    }

    cout << mx-mn << endl;
}