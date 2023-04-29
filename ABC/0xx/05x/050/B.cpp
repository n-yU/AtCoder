#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,M,s=0,P,X;
    cin >> N;

    vector<int> T(N);
    rep(i,N) {
        cin >> T.at(i);
        s += T.at(i);
    }

    cin >> M;
    rep(i,M) {
        cin >> P >> X;
        cout << s-T.at(P-1)+X << endl;
    }
}