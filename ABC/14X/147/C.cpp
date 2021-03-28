#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,j,k,A,x,y,m=0;
    cin >> N;
    vector<vector<int>> t(N, vector<int>(N,-1));

    for(i=0; i<N; i++) {
        cin >> A;
        for(j=0; j<A; j++) {
            cin >> x >> y;
            t.at(i).at(x-1) = y;
        }
    }

    for(i=0; i<(1<<N); i++) {
        vector<int> l(N,-1);
        set<int> h;
        bool b=1;
        for(j=0; j<N; j++) {
            if(i & (1<<j)) {
                h.insert(j);
                for(k=0; k<N; k++) {
                    if(t.at(j).at(k) == -1)
                        continue;
                    if(l.at(k) == -1) {
                        l.at(k) = t.at(j).at(k);
                        continue;
                    }
                    if(l.at(k) != t.at(j).at(k))
                        break;
                }
                if(k != N)
                    break;
            }
        }
        if(j == N) {
            for(j=0; j<N; j++) {
                if(h.count(j) && l.at(j)==0)
                    b = 0;
                if(!h.count(j) && l.at(j)==1)
                    b = 0;
            }
            if(b)
                m = max(m,(int)h.size());
        }
    }

    cout << m << endl;
}