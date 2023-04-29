#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,H,m=0,c=0;
    cin >> N >> H;
    vector<int> a(N),b(N);

    rep(i,N)
        cin >> a.at(i) >> b.at(i);
    sort(b.begin(), b.end(), greater<int>());
    
    rep(i,N)
        m = max(m, a.at(i));
    
    rep(i,N)
        if(b.at(i) >= m) {
            c++;
            H -= b.at(i);

            if(H <= 0) {
                cout << c << endl;
                return 0;
            }
        }
    
    if(H%m)
        c++;
    cout << c + H/m << endl;
}