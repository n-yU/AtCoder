#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int X,r=0;
    cin >> X;

    rep(i,1000)
        rep(j,1000) {
            int t = pow(i+1,j+2);
            if(t > X)
                break;
            r = max(r,t);
        }

    cout << r << endl;
}