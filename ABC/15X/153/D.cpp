#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    ll H,r=0,c=0;
    cin >> H;

    while(H != 0) {
        r += (1ll<<c);
        c++;
        H /= 2;
    }

    cout << r << endl;
}