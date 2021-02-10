#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef pair<int,int> P;

int main() {
    int N,T,r=-1;
    cin >> N >> T;
    vector<P> ct(N);

    rep(i,N)
        cin >> ct.at(i).first >> ct.at(i).second;
    sort(ct.begin(), ct.end());

    rep(i,N) {
        if(r==-1 && ct.at(i).second <= T)
            r = ct.at(i).first;
        else if(r!=-1)
            break;
    }

    if(r != -1)
        cout << r;
    else
        cout << "TLE";
    cout << endl;
}