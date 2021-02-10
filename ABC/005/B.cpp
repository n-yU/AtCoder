#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,m=100,T;
    cin >> N;

    rep(i,N) {
        cin >> T;
        m = min(T,m);
    }

    cout << m << endl;
}