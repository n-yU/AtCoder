#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (ll i = 0; i < (n); ++i)
typedef long long ll;
typedef pair<ll,ll> P;

int main() {
    ll N,A,B,t,b=0,c=0;
    cin >> N >> A >> B;
    priority_queue<P> h;
    vector<ll> d(N,0);
    rep(i,N) {
        cin >> t;
        h.push(P(t,i));
    }
    
    while(1) {
        P m = h.top();
        h.pop();
        // cout << m.first << " " << m.second << endl;

        if(m.first-(b-B*d.at(m.second)) <= 0) {
            if(h.empty())
                break;
            continue;
        }
        ++c;
        b += B;
        ++d.at(m.second);
        if(m.first-A-(b-B*d.at(m.second)) > 0)
            h.push(P(m.first-A, m.second));
        if(h.empty())
            break;
        
        // priority_queue<P> x = h;
        // while(!x.empty()) {
        //     P p = x.top();
        //     x.pop();
        //     cout << p.first << " " << b << " " << d.at(p.second) << endl;
        //     cout << p.first-(b-B*d.at(p.second)) << endl;
        // }
        // cout << endl;
    }

    cout << c << endl;
}