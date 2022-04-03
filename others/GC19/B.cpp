#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, Y, Z, i, A, B, r=0;
    cin >> N >> X >> Y >> Z;

    for(i=0; i<N; i++) {
        cin >> A >> B;
        if(A>=X && B>=Y && A+B>=Z)
            r++;
    }

    cout << r << endl;
}