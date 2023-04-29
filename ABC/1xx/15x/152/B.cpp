#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int a,b;
    cin >> a >> b;

    rep(i,max(a,b))
        cout << min(a,b);
    cout << endl;
}