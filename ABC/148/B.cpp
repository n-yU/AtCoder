#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i;
    string S,T,a="";
    cin >> N >> S >> T;

    for(i=0; i<N; i++) {
        a += S.at(i);
        a += T.at(i);
    }

    cout << a << endl;
}