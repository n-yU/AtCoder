#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,K,a,r=1;
    cin >> N >> K;
    rep(i,N)
        cin >> a;
    
    r += (N-K)/(K-1);
    if((N-K)%(K-1))
        r++;
    cout << r << endl;
}