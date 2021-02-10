#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,c=0;
    cin >> N;
    rep(i,N) {
        int s=0,t;
        rep(j,5) {
            cin >> t;
            s += t;
        }
        if(s < 20)
            ++c;
    }

    cout << c << endl;
}