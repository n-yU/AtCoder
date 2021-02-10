#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,r=-1,T,A,H,d=1e9+7;
    cin >> N >> T >> A;

    rep(i,N) {
        int t;
        cin >> H;
        t = abs(A*1000-(T*1000-H*6));
        if(t < d) {
            r = i+1;
            d = t;
        }
    }

    cout << r << endl;
}