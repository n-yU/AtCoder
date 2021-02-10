#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    ll N,r=0;
    string S;
    map<char,ll> m;
    vector<ll> c(5,0);
    cin >> N;

    rep(i,N) {
        cin >> S;
        if(!m.count(S.at(0)))
            m[S.at(0)] = 1;
        else
            ++m.at(S.at(0));
    }

    if(m.count('M'))
        c.at(0) = m.at('M');
    if(m.count('A'))
        c.at(1) = m.at('A');
    if(m.count('R'))
        c.at(2) = m.at('R');
    if(m.count('C'))
        c.at(3) = m.at('C');
    if(m.count('H'))
        c.at(4) = m.at('H');

    rep(i,1<<5) {
        ll tt=1;
        vector<ll> t;
        rep(j,5)
            if(i & 1<<j)
                t.push_back(c.at(j));
        if(t.size() != 3)
            continue;
        rep(j,t.size())
            tt *= t.at(j);
        r += tt;
    }

    cout << r << endl;
}