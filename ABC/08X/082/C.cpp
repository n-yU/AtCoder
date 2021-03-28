#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,a,r=0;
    cin >> N;
    map<int,int> m;

    rep(i,N) {
        cin >> a;
        if(m.count(a))
            m.at(a)++;
        else
            m[a] = 1;
    }

    for(auto p : m) {
        if(p.second < p.first)
            r += p.second;
        else
            r += p.second-p.first;
    }

    cout << r << endl;
}