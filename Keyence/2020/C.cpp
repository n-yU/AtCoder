#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,K,S;
    cin >> N >> K >> S;

    rep(i,K)
        cout << S << " ";
    
    rep(i,N-K)
        if(S != 1e9)
            cout << "1000000000 ";
        else
            cout << "1 ";
    cout << endl;
}