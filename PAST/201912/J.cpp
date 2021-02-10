#include <bits/stdc++.h>
using namespace std;

int dh[4] = {0, 1, 0, -1};
int dw[4] = {1, 0, -1, 0};


int main() {
    int H,W,i,j;
    pair<int,int> p;
    cin >> H >> W;
    vector<vector<int>> field(H, vector<int>(W));
    for(i=0; i<H; i++)
        for(j=0; j<W; j++)
            cin >> field.at(i).at(j);
    
    vector<vector<int>> d(H, vector<int>(W,5000010));
    queue<pair<int,int>> q;

    d.at(H-1).at(0) = 0;
    q.push(make_pair(H-1,0));

    while(!q.empty()) {
        p = q.front();
        q.pop();

        for(i=0; i<4; i++) {
            int nh=p.first+dh[i], nw=p.second+dw[i];
            if(nh>=0 && nw>=0 && nh<H && nw<W) {
                if(d.at(nh).at(nw)==5000010)
                    q.push(make_pair(nh, nw));
                d.at(nh).at(nw) = min(d.at(nh).at(nw), d.at(p.first).at(p.second)+field.at(nh).at(nw));
            }
        }
    }

    for(i=0; i<H; i++) {
        for(j=0; j<W; j++)
            cout << d.at(i).at(j) << " ";
        cout << endl;
    }
}