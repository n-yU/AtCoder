#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
    int N,t,l;
    cin >> N;
    vector<int> p;

    p.push_back(1);
    t = 1;
    while((t*=6) <= N)
        p.push_back(t);
    t = 1;
    while((t*=9) <= N)
        p.push_back(t);
    l = p.size();

    vector<vector<int>> dp(l+1, vector<int>(N+1,INF));
    rep(i,l+1)
        dp.at(i).at(0) = 0;

    rep(i,l)
        rep(j,N+1)
            if(p.at(i) > j)
                dp.at(i+1).at(j) = dp.at(i).at(j);
            else
                dp.at(i+1).at(j) = min(dp.at(i).at(j), dp.at(i+1).at(j-p.at(i))+1);
    cout << dp.at(l).at(N) << endl;
}