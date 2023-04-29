#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,t,c,r=0;
    cin >> N;
    map<int,int> a;

    rep(i,N) {
        cin >> t;
        if(a.count(t))
            a.at(t)++;
        else
            a[t] = 1;
    }

    rep(i,1e5) {
        c = 0;
        if(a.count(i))
            c += a.at(i);
        if(a.count(i+1))
            c += a.at(i+1);
        if(a.count(i+2))
            c += a.at(i+2);
        r = max(r,c);
    }

    cout << r << endl;
}