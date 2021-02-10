#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,Q,i,j,p,a,b;
    cin >> N >> Q;
    vector<vector<bool>> f(N, vector<bool>(N,0));

    for(i=0; i<Q; i++) {
        cin >> p;
        if(p == 1) {
            cin >> a >> b;
            b--;
        } else
            cin >> a;
        a--;
        
        if(p==1) {
            f.at(a).at(b) = 1;
        } else if(p==2) {
            for(j=0; j<N; j++)
                if(f.at(j).at(a))
                    f.at(a).at(j) = 1;
        } else {
            set<int> ff;
            for(j=0; j<N; j++)
                if(f.at(a).at(j))
                    ff.insert(j);
            for(auto x : ff)
                for(j=0; j<N; j++)
                    if(f.at(x).at(j))
                        f.at(a).at(j) = 1;
        }
    }

    for(i=0; i<N; i++) {
        for(j=0; j<N; j++)
            if(!f.at(i).at(j) || i==j)
                cout << 'N';
            else
                cout << 'Y';
        cout << endl;
    }
}