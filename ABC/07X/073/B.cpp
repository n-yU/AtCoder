#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,s=0,l,r;
    cin >> N;

    rep(i,N) {
        cin >> l >> r;
        s += r-l+1;
    }

    cout << s << endl;
}