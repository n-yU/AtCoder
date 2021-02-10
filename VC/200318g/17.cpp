#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,a,r=0;
    cin >> N;
    rep(i,N) {
        cin >> a;
        r += a*pow(2,N-1-i);
    }

    cout << r << endl;
}