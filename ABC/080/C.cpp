#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF = 1e9+7;

int main() {
    int N,f,r=-INF;
    cin >> N;
    vector<int> F(N,0);
    vector<vector<int>> P(N, vector<int>(11));

    rep(i,N)
        rep(j,10) {
            cin >> f;
            F.at(i) += pow(2,9-j)*f;
        }

    rep(i,N)
        rep(j,11)
            cin >> P.at(i).at(j);
    
    rep(i,pow(2,10)-1) {
        int tr=0;
        rep(j,N) {
            int t=(i+1)&F.at(j), c=0;
            rep(k,10)
                if(t>>k & 1)
                    ++c;
            tr += P.at(j).at(c);
        }
        r = max(r,tr);
    }

    cout << r << endl;
}