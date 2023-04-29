#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;
typedef pair<int,int> P;

int main() {
    int N,M;
    cin >> N >> M;
    vector<P> s(N),c(M);
    rep(i,N)
        cin >> s.at(i).first >> s.at(i).second;
    rep(i,M)
        cin >> c.at(i).first >> c.at(i).second;
    
    rep(i,N) {
        int mi, mv=INF;
        rep(j,M) {
            int t = abs(s.at(i).first-c.at(j).first)+abs(s.at(i).second-c.at(j).second);
            if(t < mv) {
                mv = t;
                mi = j+1;
            }
        }
        cout << mi << endl;
    }
}