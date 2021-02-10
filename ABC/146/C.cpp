#include <bits/stdc++.h>
using namespace std;

using ll=long long;

ll A,B;

ll price(int x) {
    ostringstream oss;
    oss << x;
    ll d = oss.str().size();
    return A*x + B*d;
}

int main() {
    ll X,l=0,r=1e9,m,pm;
    cin >> A >> B >> X;

    if(X >= price(r)) {
        cout << 1000000000 << endl;
        return 0;
    }

    while(r-l > 1) {
        m=(l+r)/2;
        pm = price(m);

        if(X >= pm)
            l = m;
        else
            r = m;
    }

    cout << l << endl;
}