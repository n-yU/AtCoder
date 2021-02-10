#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int H,W;
    cin >> H >> W;
    vector<string> f(H);

    rep(i,H)
        cin >> f.at(i);
    
    rep(i,H)
        rep(j,W) {
            bool ok=0;
            if(f.at(i).at(j) == '.')
                continue;

            if(i>0 && f.at(i-1).at(j)=='#')
                ok = 1;
            if(i<H-1 && f.at(i+1).at(j)=='#')
                ok = 1;
            if(j>0 && f.at(i).at(j-1)=='#')
                ok = 1;
            if(j<W-1 && f.at(i).at(j+1)=='#')
                ok = 1;

            if(!ok) {
                cout << "No" << endl;
                return 0;
            }
        }

    cout << "Yes" << endl;
}