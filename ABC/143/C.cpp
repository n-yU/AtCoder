#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,r;
    string S;
    char p;
    cin >> N >> S;
    r = N;

    p = S.at(0);
    for(i=1; i<N; i++) {
        if(p == S.at(i))
            r--;
        p = S.at(i);
    }

    cout << r << endl;
}