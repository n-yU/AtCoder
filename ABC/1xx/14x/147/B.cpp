#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int i,N = S.size(),c=0;

    for(i=0; i<N/2; i++)
        if(S.at(i) != S.at(N-1-i))
            c++;
    cout << c << endl;
}