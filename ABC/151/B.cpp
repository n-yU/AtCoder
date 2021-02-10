#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,K,M,A,sA=0,r;
    cin >> N >> K >> M;
    rep(i,N-1) {
        cin >> A;
        sA += A;
    }

    r = N*M-sA;

    if(r <= 0)
        cout << 0;
    else if(r > K)
        cout << -1;
    else
        cout << r;
    cout << endl;
}