#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
    int N,m=INF,mn=100,mx=-100;
    cin >> N;
    vector<int> a(N);

    rep(i,N) {
        cin >> a.at(i);
        mn = min(mn, a.at(i));
        mx = max(mx, a.at(i));
    }

    rep(i,mx-mn+1) {
        int b=mn+i,s=0;
        rep(j,N)
            s += pow((a.at(j)-b),2);
        m = min(m,s);
    }

    cout << m << endl;
}