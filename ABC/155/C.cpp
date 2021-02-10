#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,x=0;
    map<string, int> m;
    vector<string> r;
    string S;
    cin >> N;

    rep(i,N) {
        cin >> S;
        if(!m.count(S))
            m[S] = 1;
        else
            m.at(S)++;
        x = max(x, m.at(S));
    }

    for(auto p : m)
        if(p.second == x)
            r.push_back(p.first);
    sort(r.begin(), r.end());

    rep(i,r.size())
        cout << r.at(i) << endl;
}