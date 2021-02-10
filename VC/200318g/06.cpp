#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,K,a,s=0;
    cin >> N >> K;

    rep(i,N) {
        cin >> a;
        s += a;
        if(s >= K) {
            cout << i+1 << endl;
            return 0;
        }
    }
}