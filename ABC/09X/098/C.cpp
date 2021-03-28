#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,r=5e5;;
    string S;
    cin >> N >> S;
    vector<int> e(N+2,0),w(N+2,0);

    rep(i,N) {
        w.at(i+1) = w.at(i);
        if(S.at(i) == 'W')
            w.at(i+1)++;
    }
    w.at(N+1) = w.at(N);

    rep(i,N) {
        e.at(N-i) = e.at(N+1-i);
        if(S.at(N-i-1) == 'E')
            e.at(N-i)++;
    }
    e.at(0) = e.at(1);
    
    rep(i,N)
        r = min(r, w.at(i)+e.at(i+2));

    cout << r << endl;
}