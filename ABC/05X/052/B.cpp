#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,m=0,t=0,i;
    string S;
    cin >> N >> S;

    for(i=0; i<N; i++) {
        if(S.at(i) == 'I')
            t++;
        else
            t--;
        m = max(m, t);
    }

    cout << m << endl;
}