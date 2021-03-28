#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,c1=0,c2=0,N;
    string S;
    cin >> S;
    N = S.size();

    for(i=0; i<N; i++)
        if(i%2) {
            if(S.at(i) == '0')
                c1++;
            else
                c2++;
        } else {
            if(S.at(i) == '1')
                c1++;
            else
                c2++;
        }

    if(c1 > c2)
        cout << N-c1;
    else
        cout << N-c2;
    cout << endl;
}