#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,s=0;
    cin >> N;
    vector<int> A(N),r(N);
    rep(i,N) {
        cin >> A.at(i);
        s += A.at(i);
    }
    
    r.at(0) = s;
    rep(i,N/2)
        r.at(0) -= 2 * A.at(i*2+1);
    rep(i,N-1)
        r.at(i+1) = 2*A.at(i) - r.at(i);
    rep(i,N)
        cout << r.at(i) << " ";
    cout << endl;
}