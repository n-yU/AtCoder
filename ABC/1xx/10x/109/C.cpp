#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    int t = x%y;

    if(x == -1)
        return y;

    if(x < y)
        swap(x, y);
    
    while(t != 0) {
        t = x % y;
        x = y;
        if(t != 0)
            y = t;
    }

    return y;
}

int main() {
    int N,X,i,r=-1,t;
    cin >> N >> X;

    for(i=0; i<N; i++) {
        cin >> t;
        r = gcd(r,abs(t-X));
    }

    cout << r << endl;
}