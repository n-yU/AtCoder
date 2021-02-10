#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int dh[3] = {-1, 0, 1};
int dw[3] = {-1, 0, 1};

int main() {
    int H,W;
    cin >> H >> W;
    vector<string> S(H);
    rep(i,H)
        cin >> S.at(i);
    
    rep(i,H)
        rep(j,W) {
            if(S.at(i).at(j) == '.')
                continue;

            int c = 0;
            rep(k,3)
                rep(l,3) {
                    int nh=i+dh[k], nw=j+dw[l];
                    if(nh<0 || nw<0 || nh>=H || nw>=W || (i==nh && j==nw)) {
                        ++c;
                        continue;
                    }
                    if(S.at(nh).at(nw) != '.')
                        ++c;
                }
                
            if(c == 9)
                rep(k,3)
                    rep(l,3) {
                        int nh=i+dh[k], nw=j+dw[l];
                        if(nh<0 || nw<0 || nh>=H || nw>=W)
                            continue;
                        if(i==nh && j==nw)
                            S.at(nh).at(nw) = '+';
                        else if(S.at(nh).at(nw) != '+')
                            S.at(nh).at(nw) = '*';
                    }
        }

    rep(i,H)
        rep(j,W) {
            if(S.at(i).at(j) == '#') {
                cout << "impossible" << endl;
                return 0;
            }

            if(S.at(i).at(j) == '+')
                S.at(i).at(j) = '#';
            else
                S.at(i).at(j) = '.';
        }
    
    cout << "possible" << endl;
    rep(i,H)
        cout << S.at(i) << endl;
}