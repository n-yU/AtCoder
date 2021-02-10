#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int gcd(int x, int y) {
    if(x == -1)
        return y;

    if(x < y)
        swap(x,y);

    while(x%y != 0) {
        int t = x%y;
        x = y;
        y = t;
    }

    return y;
}

int main() {
    int N,A,r=-1;
    cin >> N;
    rep(i,N) {
        cin >> A;
        r = gcd(r,A);
    }
    
    cout << r << endl;
}