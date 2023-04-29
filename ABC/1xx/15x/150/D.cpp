#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

ll LCM(ll a, ll b) {
    ll x=a*b,r;
    if(a<b)
        swap(a, b);

    r = a%b;
    while(r != 0){
        a = b;
        b = r;
        r = a % b;
    }

    return x/b;
}

int RR(int x) {
    int r=0;
    while(x%2 == 0) {
        x /= 2;
        r++;
    }
    return r;
}

int main() {
    ll N,M,x=1,t;
    cin >> N >> M;
    vector<ll> a(N);

    rep(i,N) {
        cin >> a.at(i);
        if(a.at(i)%2 == 1) {
            cout << 0 << endl;
            return 0;
        }
        a.at(i) /= 2;
    }

    t = RR(a.at(0));
    rep(i,N) {
        if(RR(a.at(i)) != t) {
            cout << 0 << endl;
            return 0;
        }
        a.at(i) >>= t;
    }
    M >>= t;
    
    rep(i,N) {
        x = LCM(x, a.at(i));
        if(x > M) {
            cout << 0 << endl;
            return 0;
        }
    }

    cout << (M/x+1)/2 << endl;
}