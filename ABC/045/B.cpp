#include <bits/stdc++.h>
using namespace std;

int main() {
    string t;
    char nt='a';
    map<char,string> S;
    map<char,int> rc;

    cin >> t; S['a']=t; rc['a']=0;
    cin >> t; S['b']=t; rc['b']=0;
    cin >> t; S['c']=t; rc['c']=0;

    while(1) {
        if(++rc.at(nt) == S.at(nt).size()+1)
            break;
        nt = S.at(nt).at(rc.at(nt)-1);
    }

    cout << (char)('A'+nt-'a') << endl;
}