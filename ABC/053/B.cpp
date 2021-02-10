#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i, n=s.size(), a=-1, z=0;

    for(i=0; i<n; i++) {
        if(a==-1 && s.at(i) == 'A')
            a = i;
        if(s.at(i) == 'Z')
            z = max(z,i);
    }

    cout << z-a+1 << endl;
}