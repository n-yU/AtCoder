#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,M,x,y,r=0;
    cin >> N >> M;
    vector<set<int>> p(N);

    rep(i,M) {
        cin >> x >> y;
        --x, --y;
        p.at(x).insert(y);
        p.at(y).insert(x);
    }

    rep(i,1<<N) {
        vector<int> t;
        bool ok=1;
        rep(j,N)
            if(i & 1<<j)
                t.push_back(j);
        rep(j,t.size())
            for(int k=j+1; k<t.size(); ++k) 
                if(!p.at(t.at(j)).count(t.at(k)))
                    ok = 0;
        if(ok)
            r = max(r,(int)t.size());
    }

    cout << r << endl;
}