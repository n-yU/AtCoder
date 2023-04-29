#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int a=0;
    string s;
    cin >> s;
    rep(i,4)
        a += (s.at(i) == '+');
    cout << a-(4-a) << endl;
}