#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,a,c;
    cin >> N;

    rep(i,N) {
        cin >> a;
        while(!(a%2)) {
            a /= 2;
            c++;
        }
    }

    cout << c << endl;
}