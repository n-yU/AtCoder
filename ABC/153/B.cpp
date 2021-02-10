#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int H,N,A,s=0;
    cin >> H >> N;

    rep(i,N) {
        cin >> A;
        s += A;
    }

    if(s >= H)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
}