#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,m=0,r=0;
    cin >> N;
    vector<int> h(N);
    rep(i,N) {
        cin >> h.at(i);
        m = max(m, h.at(i));
    }
    
    rep(j,m) {
        bool c=0;
        int t=m-j;
        rep(i,N) {
            if(!c && h.at(i)>=t)
                r++, c=1;
            else if(c && h.at(i)<t)
                c=0;
        }
    }

    cout << r << endl;
}