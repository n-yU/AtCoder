#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

ll lcd(ll x, ll y) {
    if(x < y)
        swap(x,y);
    
    ll tx=x, ty=y;
    
    while(x%y != 0) {
        ll t = x%y;
        x = y;
        y = t;
    }

    return tx/y*ty;
}

int main() {
    int N;
    ll T,r=1;
    cin >> N;

    rep(i,N) {
        cin >> T;
        r = lcd(r,T);
    }

    cout << r << endl;
}