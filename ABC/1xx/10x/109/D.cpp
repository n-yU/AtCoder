#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
typedef pair<P,P> PP;

int main() {
    int H,W,i,j;
    cin >> H >> W;
    vector<vector<int>> a(H, vector<int>(W));
    vector<pair<P,P>> r;

    for(i=0; i<H; i++)
        for(j=0; j<W; j++)
            cin >> a.at(i).at(j);
    
    for(i=0; i<H; i++) {
        for(j=0; j<W; j++) {
            if(i+j == H+W-2)
                continue;
            if(i%2==0 && a.at(i).at(j)%2) {
                if(j != W-1) {
                    a.at(i).at(j+1)++;
                    r.push_back(PP(P(i+1,j+1), P(i+1,j+2)));
                } else {
                    a.at(i+1).at(j)++;
                    r.push_back(PP(P(i+1,j+1), P(i+2,j+1)));
                }
                a.at(i).at(j)--;
            }
            if(i%2 && a.at(i).at(W-1-j)%2) {
                if(W-j != 1) {
                    a.at(i).at(W-2-j)++;
                    r.push_back(PP(P(i+1,W-j), P(i+1,W-1-j)));
                } else {
                    a.at(i+1).at(W-1-j)++;
                    r.push_back(PP(P(i+1,W-j), P(i+2,W-j)));
                }
                a.at(i).at(W-1-j)--;
            }
        }
    }

    cout << r.size() << endl;
    for(auto x : r)
        cout << x.first.first << " " << x.first.second << " " << x.second.first << " " << x.second.second << endl;
}