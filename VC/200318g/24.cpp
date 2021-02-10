#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,M,p=0;
    bool ok=1;
    cin >> N >> M;
    
    if(N < M) {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> A(N),B(M);
    rep(i,N)
        cin >> A.at(i);
    rep(i,M)
        cin >> B.at(i);
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    rep(i,M) {
        while(A.at(p) < B.at(i))
            if(++p == N) {
                ok = 0;
                break;
            }
        if(++p>=N || !ok) {
            if(i < M-1)
                ok = 0;
            break;
        }
    }

    cout << ((ok) ? "YES" : "NO") << endl;
}