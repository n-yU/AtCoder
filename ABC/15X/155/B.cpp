#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,A;
    cin >> N;

    rep(i,N) {
        cin >> A;
        if(A%2==0 && A%3 && A%5) {
            cout << "DENIED" << endl;
            return 0;
        }
    }

    cout << "APPROVED" << endl;
}