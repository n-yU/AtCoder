#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int p=700;
    string S;
    cin >> S;

    rep(i,3)
        if(S.at(i) == 'o')
            p += 100;
    cout << p << endl;
}