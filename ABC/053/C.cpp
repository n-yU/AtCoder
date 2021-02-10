#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ll x,r,a;
    cin >> x;

    a = x/11*2+1;
    r = x%11;
    if(r > 6)
        a++;
    else if(r == 0)
        a--;
    
    cout << a << endl;
}