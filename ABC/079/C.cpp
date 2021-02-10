#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int a;
    string N;
    cin >> N;

    rep(i,8) {
        int t = N.at(0)-'0';
        rep(j,3) {
            if(i & 1<<j)
                t += N.at(j+1)-'0';
            else
                t -= N.at(j+1)-'0';
        }
        if(t == 7) {
            a = i;
            break;
        }
    }

    cout << N.at(0);
    rep(i,3) {
        if(a & 1<<i)
            cout << '+';
        else
            cout << '-';
        cout << N.at(i+1);
    }
    cout << "=7" << endl;
}