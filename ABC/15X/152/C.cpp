#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,m=3e5,P,r=0;
    cin >> N;

    rep(i,N) {
        cin >> P;
        if(P <= m)
            r++;
        m = min(m,P);
    }

    cout << r << endl;
}