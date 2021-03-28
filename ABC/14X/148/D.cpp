#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,A,c=1;
    cin >> N;

    for(i=0; i<N; i++) {
        cin >> A;
        if(A == c)
            c++;
    }

    if(c == 1)
        cout << -1;
    else
        cout << N-c+1;
    cout << endl;
}