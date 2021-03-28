#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q,i,j,m=0;
    cin >> Q;
    vector<int> l(Q),r(Q);

    for(i=0; i<Q; i++) {
        cin >> l.at(i) >> r.at(i);
        m = max(m, r.at(i));
    }
    
    vector<bool> sl(m+1,1);
    vector<int> c(m+1);

    for(i=2; i<=m; i++)
        if(sl.at(i))
            for(j=i*2; j<=m; j+=i)
                sl.at(j) = 0;
    
    for(i=3; i<=m; i++) {
        c.at(i) = c.at(i-1);
        if(sl.at(i) && sl.at((i+1)/2))
            c.at(i)++;
    }

    for(i=0; i<Q; i++)
        cout << c.at(r.at(i))-c.at(l.at(i)-1) << endl;
}