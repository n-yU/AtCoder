#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n,v,m1=0,m2=0,ix1,ix2,sm1=0,sm2=0;
    cin >> n;
    map<int,int> p1,p2;

    rep(i,n) {
        cin >> v;
        if(!(i%2)) {
            if(!p1.count(v))
                p1[v] = 1;
            else
                p1.at(v)++;
        } else {
            if(!p2.count(v))
                p2[v] = 1;
            else
                p2.at(v)++;
        }
    }

    for(auto p : p1) {
        if(p.second > m1) {
            m1 = p.second;
            ix1 = p.first;
        }
    }
    p1.erase(ix1);
    for(auto p : p2) {
        if(p.second > m2) {
            m2 = p.second;
            ix2 = p.first;
        }
    }
    p2.erase(ix2);

    if(ix1 == ix2) {
        for(auto p : p1)
            sm1 = max(sm1, p.second);
        for(auto p : p2)
            sm2 = max(sm2, p.second);
        cout << min(n-m1-sm2, n-m2-sm1);
    } else
        cout << n-m1-m2;
    cout << endl;
}