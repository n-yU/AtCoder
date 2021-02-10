#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,K,d,r;
    cin >> N >> K;
    set<int> D;

    rep(i,K) {
        cin >> d;
        D.insert(d);
    }

    rep(i,1e5) {
        if(i < N)
            continue;

        string t = to_string(i);
        bool ok=1;
        rep(j,t.size())
            if(D.count(t.at(j)-'0'))
                ok = 0;
        
        if(ok) {
            r = i;
            break;
        }
    }

    cout << r << endl;
}