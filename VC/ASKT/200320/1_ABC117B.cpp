#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,s=0,m=0,L;
    cin >> N;

    rep(i,N) {
        cin >> L;
        s += L;
        m = max(m,L);
    }

    if(m < s-m)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
}