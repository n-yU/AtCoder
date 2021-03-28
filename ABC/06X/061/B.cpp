#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,M,a,b;
    cin >> N >> M;
    vector<int> r(N,0);

    rep(i,M) {
        cin >> a >> b;
        r.at(--a)++;
        r.at(--b)++;
    }

    rep(i,N)
        cout << r.at(i) << endl;
}