#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int X,s=0,c=0;
    cin >> X;
    rep(i,X) {
        s += i+1;
        c++;
        if(s >= X)
            break;
    }

    cout << c << endl;
}