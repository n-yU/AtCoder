#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,r;
    cin >> N;
    r = N;
    
    rep(i,N+1) {
        int c=0,t=i;

        while(t>0) {
            c += t%6;
            t /= 6;
        }
        t = N-i;
        while(t>0) {
            c += t%9;
            t /= 9;
        }

        r = min(r,c);
    }

    cout << r << endl;
}