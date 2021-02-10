#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,M,K,t,r=0;
    cin >> N >> M;
    vector<int> A(M,0);

    rep(i,N) {
        cin >> K;
        rep(j,K) {
            cin >> t;
            A.at(t-1)++;
        }
    }

    rep(i,M)    
        if(A.at(i) == N)
            r++;
    cout << r << endl;
}