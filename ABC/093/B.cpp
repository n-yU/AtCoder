#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int A,B,K,t,n;
    cin >> A >> B >> K;
    n = B-A+1;

    rep(i,min(n,K))
        cout << A+i << endl;
    t = A+min(n,K)-1;
    rep(i,K)
        if(B-K+1+i > t)
            cout << B-K+1+i << endl;
}