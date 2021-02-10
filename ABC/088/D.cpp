#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef pair<int,int> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    int H,W,b=0;
    cin >> H >> W;
    vector<string> s(H);
    vector<vector<int>> d(H, vector<int>(W,-1));
    queue<P> q;

    rep(i,H) {
        cin >> s.at(i);
        rep(j,W)
            if(s.at(i).at(j) == '#')
                b++;
    }
    
    q.push(P(0,0));
    d.at(0).at(0) = 0;

    while(!q.empty()) {
        P v = q.front();
        q.pop();

        rep(i,4) {
            P nv = P(v.first+dx[i], v.second+dy[i]);
            if(nv.first<0 || nv.first>=H || nv.second<0 || nv.second>=W)
                continue;
            if(s.at(nv.first).at(nv.second) == '#')
                continue;
            if(d.at(nv.first).at(nv.second) != -1)
                continue;
            d.at(nv.first).at(nv.second) = d.at(v.first).at(v.second) + 1;
            q.push(nv);
        }
    }

    if(d.at(H-1).at(W-1) == -1)
        cout << -1;
    else
        cout << H*W-b-d.at(H-1).at(W-1)-1;
    cout << endl;
}