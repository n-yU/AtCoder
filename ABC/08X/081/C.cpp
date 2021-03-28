#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,K,A,r=0;
    cin >> N >> K;
    map<int,int> m;
    vector<int> t;

    rep(i,N) {
        cin >> A;
        if(m.count(A))
            m.at(A)++;
        else
            m[A] = 1;
    }

    for(auto p : m)
        t.push_back(p.second);
    sort(t.begin(), t.end());

    if((int)t.size()-K > 0)
        rep(i, t.size()-K)
            r += t.at(i);
    
    cout << r << endl;
}