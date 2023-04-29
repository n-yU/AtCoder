#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,D,X,A;
    cin >> N >> D >> X;
    
    rep(i,N) {
        cin >> A;
        X += (D-1)/A+1;
    }

    cout << X << endl;
}