#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,A,pA;
    cin >> N;

    cin >> pA;
    for(i=1; i<N; i++) {
        cin >> A;
        if(A > pA)
            cout << "up " << A-pA;
        else if(A < pA)
            cout << "down " << pA-A;
        else
            cout << "stay";
        cout << endl;
        pA = A;
    }
}