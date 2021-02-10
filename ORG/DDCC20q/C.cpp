#include <bits/stdc++.h>
using namespace std;

int main() {
    int H,W,K,i,j,idx=1;
    cin >> H >> W >> K;
    vector<string> s(H);
    vector<vector<int>> a(H, vector<int>(W, 0));

    for(i=0; i<H; i++)
        cin >> s.at(i);
    
    for(i=0; i<H; i++)
        for(j=0; j<W; j++) {
            if(s.at(i).at(j) == '#') {
                a.at(i).at(j) = idx;
                idx++;
            } else if(j != 0) {
                a.at(i).at(j) = a.at(i).at(j-1);
            }
        }
    
    for(i=0; i<H; i++)
        for(j=W-2; j>=0; j--)
            if(a.at(i).at(j) == 0)
                a.at(i).at(j) = a.at(i).at(j+1);
    
    for(i=1; i<H; i++)
        if(a.at(i).at(0) == 0)
            for(j=0; j<W; j++)
                a.at(i).at(j) = a.at(i-1).at(j);
    
    for(i=H-2; i>=0; i--)
        if(a.at(i).at(0) == 0)
            for(j=0; j<W; j++)
                a.at(i).at(j) = a.at(i+1).at(j);
    
    for(i=0; i<H; i++) {
        for(j=0; j<W; j++)
            cout << a.at(i).at(j) << " ";
        cout << endl;
    }
}