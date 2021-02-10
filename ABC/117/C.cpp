#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,M,r=0;
    cin >> N >> M;
    vector<int> X(M),d(M-1);

    if(N >= M) {
        cout << 0 << endl;
        return 0;
    }

    rep(i,M)
        cin >> X.at(i);
    sort(X.begin(), X.end());

    rep(i,M-1)
        d.at(i) = X.at(i+1)-X.at(i);
    sort(d.begin(), d.end());

    rep(i,min(M-N,M-1))
        r += d.at(i);
    cout << r << endl;
}