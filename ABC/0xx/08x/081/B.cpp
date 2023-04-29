#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,A,m=1e9+7;
    cin >> N;

    rep(i,N) {
        int c=0;
        cin >> A;
        while(A%2 == 0) {
            A /= 2;
            c++;
        }
        m = min(m,c);
    }

    cout << m << endl;
}