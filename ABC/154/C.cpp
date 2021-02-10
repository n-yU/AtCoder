#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,A;
    set<int> s;
    cin >> N;

    rep(i,N) {
        cin >> A;
        if(!s.count(A))
            s.insert(A);
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}