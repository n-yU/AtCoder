#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    ll N,x=0,r=0;
    string S;
    map<char,ll> m;
    vector<ll> t(5);
    cin >> N;

    m['M']=0, m['A']=0, m['R']=0, m['C']=0, m['H']=0;

    rep(i,N) {
        cin >> S;
        if(m.count(S.at(0)))
            m.at(S.at(0))++;
    }

    for(auto p : m) {
        t.at(x) = p.second;
        x++;
    }

    rep(i,3)
        for(int j=i+1; j<4; j++)
            for(int k=j+1; k<5; k++)
                r += t.at(i)*t.at(j)*t.at(k);
    
    cout << r << endl;
}