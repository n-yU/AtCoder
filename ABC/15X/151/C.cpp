#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,M,p,w=0;
    string S;
    cin >> N >> M;
    set<int> AC;
    map<int,int> WA;

    rep(i,M) {
        cin >> p >> S;
        if(S == "AC") {
            AC.insert(p);
        } else {
            if(!AC.count(p)) {
                if(WA.count(p))
                    WA.at(p)++;
                else
                    WA[p] = 1;
            }
        }
    }

    for(auto p : WA)
        if(AC.count(p.first))
            w += p.second;
    
    cout << AC.size() << " " << w << endl;
}