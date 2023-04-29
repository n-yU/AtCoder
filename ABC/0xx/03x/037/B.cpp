#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)

int main() {
    int N,Q,L,R,T;
    cin >> N >> Q;
    vector<int> r(N,0);

    rep(i,Q) {
        cin >> L >> R >> T;
        rep(j,R-L+1)
            r.at(L-1+j) = T;
    }

    rep(i,N)
        cout << r.at(i) << endl;
}