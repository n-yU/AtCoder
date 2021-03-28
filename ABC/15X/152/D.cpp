#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,r=0;
    cin >> N;
    vector<vector<int>> c(10, vector<int>(10,0));
    
    rep(i,N) {
        string s = to_string(i+1);
        c.at(s.at(0)-'0').at(s.at(s.size()-1)-'0')++;
    }

    rep(i,9)
        rep(j,9)
            r += c.at(i+1).at(j+1)*c.at(j+1).at(i+1);
    cout << r << endl;
}