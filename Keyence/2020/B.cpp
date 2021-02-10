#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef pair<int,int> P;

int main() {
    int N,X,L,p,c=1;
    cin >> N;
    vector<P> r(N);

    rep(i,N) {
        cin >> X >> L;
        r.at(i).first = X+L;
        r.at(i).second = X-L;
    }
    sort(r.begin(), r.end());

    p = r.at(0).first;
    rep(i,N-1)
        if(r.at(i+1).second >= p) {
            p = r.at(i+1).first;
            c++;
        }

    cout << c << endl;
}