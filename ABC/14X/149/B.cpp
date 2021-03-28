#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ll A,B,K,t,a;
    cin >> A >> B >> K;

    t = A - K;
    if(t<0) {
        a = B + t;
        t = 0;
        if(a<0)
            a = 0;
    } else {
        a = B;
    }
    cout << t << " " << a << endl;
}