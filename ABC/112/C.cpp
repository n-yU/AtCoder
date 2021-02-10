#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,x,y,h,tx,ty,th;
    cin >> N;
    vector<vector<int>> py(101, vector<int>(101,-1));

    rep(i,N) {
        cin >> x >> y >> h;
        py.at(x).at(y) = h;
        if(h > 0)
            tx=x, ty=y, th=h;
    }

    rep(i,101)
        rep(j,101) {
            int ph=th+abs(i-tx)+abs(j-ty);
            bool r=1;
            rep(k,101)
                rep(l,101) {
                    if(py.at(k).at(l) == -1)
                        continue;
                    if(py.at(k).at(l) != max(ph-abs(k-i)-abs(l-j), 0))
                        r=0;
                }
            
            if(r) {
                cout << i << " " << j << " " << ph << endl;
                return 0;
            }
        }
}