#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ll A,B,x,y,t,i;
    cin >> A >> B;

    y = A * B;
    if(A < B) {
        t = A;
        A = B;
        B = t;
    }

    x = A % B;
    while(x != 0) {
        A = B;
        B = x;
        x = A % B;
    }

    cout << y/B << endl;
}