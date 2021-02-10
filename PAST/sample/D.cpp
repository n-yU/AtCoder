#include <bits/stdc++.h>
using namespace std;

int main() {
    int c0=0, c1=0, i;
    string S;
    cin >> S;

    for(i=0; i<S.size(); i++) {
        if(S.at(i) == '0')
            c0++;
        else
            c1++;
    }

    cout << min(c0, c1) * 2 << endl;
}