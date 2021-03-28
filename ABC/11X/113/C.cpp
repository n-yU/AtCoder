#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef pair<int,int> P;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> p(N,0);
    vector<pair<P,int>> h(M);
    vector<string> r(M);

    rep(i,M) {
        cin >> h.at(i).first.second >> h.at(i).first.first;
        h.at(i).second = i;
    }
    sort(h.begin(), h.end());

    rep(i,M) {
        string x,y,t="";
        x = to_string(h.at(i).first.second);
        y = to_string(++p.at(h.at(i).first.second-1));

        rep(j,6-x.size())
            t += "0";
        t += x;
        rep(j,6-y.size())
            t += "0";
        t += y;

        r.at(h.at(i).second) = t;
    }

    rep(i,M)
        cout << r.at(i) << endl;
}