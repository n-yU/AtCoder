#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int a,b,h=0;
    cin >> a >> b;

    rep(i,b-a)
        h += i+1;
    cout << h-b << endl;
}