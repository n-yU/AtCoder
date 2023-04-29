#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n)
        cin >> a.at(i);
    
    rep(i,n/2+(n%2))
        cout << a.at(n-1-i*2) << " ";
    rep(i,n/2)
        cout << a.at(i*2+(n%2)) << " ";
}