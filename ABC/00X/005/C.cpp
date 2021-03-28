#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int T,N,M,x=-1,r;
    cin >> T >> N;
    vector<int> A(N);
    rep(i,N)
        cin >> A.at(i);
    cin >> M;
    vector<int> B(M);
    rep(i,M)
        cin >> B.at(i);

    rep(i,M) {
        while(++x < N)
            if(A.at(x)<=B.at(i) && B.at(i)<=A.at(x)+T) {
                ++r;
                break;
            }
        if(x == N)
            break;
    }

    cout << ((r==M) ? "yes" : "no") << endl;
}