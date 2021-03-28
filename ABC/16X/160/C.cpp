#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
    int K,N,r=INF,s=0;
    cin >> K >> N;
    vector<int> A(N),d(N);

    cin >> A.at(0);
    rep(i,N-1) {
        cin >> A.at(i+1);
        d.at(i) = A.at(i+1)-A.at(i);
    }
    d.at(N-1) = A.at(0)+K-A.at(N-1);
    
    rep(i,N)
        s += d.at(i);
    
    rep(i,N)
        r = min(r, s-d.at(i));

    cout << r << endl;
}