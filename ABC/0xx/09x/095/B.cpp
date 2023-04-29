#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,X,m,t=1000;
    cin >> N >> X;

    rep(i,N) {
        cin >> m;
        t = min(t,m);
        X -= m;
    }

    cout << N+X/t << endl;
}