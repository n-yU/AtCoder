#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int dh[8] = {1, 1, 1, -1, -1, -1, 0, 0};
int dw[8] = {1, -1, 0, 1, -1, 0, 1, -1};

int main() {
    int H,W;
    cin >> H >> W;
    vector<string> f(H);
    vector<vector<int>> r(H, vector<int>(W,0));
    rep(i,H)
        cin >> f.at(i);

    rep(i,H)
        rep(j,W)
            if(f.at(i).at(j) == '#')
                rep(k,8) {
                    int nh=i+dh[k], nw=j+dw[k];
                    if(nh<0 || nh>=H || nw<0 || nw>=W)
                        continue;
                    if(f.at(nh).at(nw) == '#')
                        continue;
                    r.at(nh).at(nw)++;
                }
    
    rep(i,H) {
        rep(j,W)
            if(f.at(i).at(j) == '#')
                cout << '#';
            else
                cout << r.at(i).at(j);
        cout << endl;
    }
}