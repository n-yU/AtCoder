#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,m=1e9+7;
    cin >> N;
    vector<int> X(N);

    rep(i,N)
        cin >> X.at(i);
    
    rep(i,100) {
        int P = i+1,t=0;
        rep(i,N)
            t += (X.at(i)-P)*(X.at(i)-P);
        m = min(t,m);
    }

    cout << m << endl;
}