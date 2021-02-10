#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M,X,i,A,c=0;
    cin >> N >> M >> X;

    for(i=0; i<M; i++) {
        cin >> A;
        if(A < X)
            c++;
    }

    cout << min(c,M-c) << endl;
}