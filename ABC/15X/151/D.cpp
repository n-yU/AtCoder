#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF = 1e9+7;
typedef pair<int,int> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    int H,W,r=0;
    cin >> H >> W;
    vector<string> f(H);

    rep(i,H)
        cin >> f.at(i);
    
    rep(i,H)
        rep(j,W) {
            if(f.at(i).at(j) == '#')
                continue;
            int tr=0;
            vector<vector<int>> d(H, vector<int>(W, INF));
            queue<P> q;
            q.push(P(i,j));
            d.at(i).at(j) = 0;

            while(!q.empty()) {
                P p = q.front();
                q.pop();
                rep(k,4) {
                    int nh=p.first+dx[k], nw=p.second+dy[k];
                    if(nh<0 || nh>=H || nw<0 || nw>=W)
                        continue;
                    if(f.at(nh).at(nw)!='#' && d.at(nh).at(nw)==INF) {
                        q.push(P(nh,nw));
                        d.at(nh).at(nw) = d.at(p.first).at(p.second) + 1;
                    }
                }
            }

            rep(k,H)
                rep(l,W)
                    if(d.at(k).at(l) != INF)
                        tr = max(tr,d.at(k).at(l));
            r = max(r,tr);
        }

    cout << r << endl;
}