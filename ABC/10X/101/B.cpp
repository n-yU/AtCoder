#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    ll a=0,N=0;
    string s;
    cin >> s;

    rep(i,s.size()) {
        a += s.at(i)-'0';
        N += s.at(i)-'0';
        N *= 10;
    }
    cout << (((N/10)%a) ? "No" : "Yes") << endl;
}