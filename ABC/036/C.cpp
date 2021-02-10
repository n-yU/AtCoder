#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
    int N,y=0;
    cin >> N;
    vector<int> a(N);
    set<int> t;
    map<int,int> m;

    rep(i,N) {
        cin >> a.at(i);
        t.insert(a.at(i));
    }

    for(auto x : t)
        m[x] = y++;

    rep(i,N)
        cout << m.at(a.at(i)) << endl;
}