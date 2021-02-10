#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
    int N,r=INF;
    cin >> N;

    rep(i,N+1) {
        int t1=i, t2=N-i, c=0;
        while(t1 != 0) {
            c += t1%6;
            t1 /= 6;
        }
        while(t2 != 0) {
            c += t2%9;
            t2 /= 9;
        }
        r = min(r,c);
    }
    cout << r << endl;
}