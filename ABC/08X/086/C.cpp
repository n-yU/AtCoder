#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,t,x,y,pt=0,px=0,py=0;
    cin >> N;

    rep(i,N) {
        cin >> t >> x >> y;
        int dp=abs(x-px)+abs(y-py), dt=t-pt;
        if(dp>dt || dp%2!=dt%2) {
            cout << "No" << endl;
            return 0;
        }
        pt=t, px=x, py=y;
    }

    cout << "Yes" << endl;
}