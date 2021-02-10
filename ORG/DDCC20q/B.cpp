#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ll N,i,s=0,r=0,x=0,y=0;
    cin >> N;
    vector<ll> A(N);

    for(i=0; i<N; i++) {
        cin >> A.at(i);
        s += A.at(i);
    }

    for(i=0; i<N; i++) {
        x += A.at(i);
        if(x*2 >= s)
            break;
    }
    y = s-x;
    r = x-y;

    x -= A.at(i);
    y = s-x;
    r = min(r, y-x);

    cout << r << endl;
}