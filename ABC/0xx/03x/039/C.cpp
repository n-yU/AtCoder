#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n1=-1,n2=-1;
    string S;
    char pp,p;
    cin >> S;

    pp=S.at(0), p=S.at(1);
    rep(i,18) {
        string t;
        t += pp;
        t += p;
        t += S.at(i+2);

        if(t == "WWB") {
            if(n1 == -1)
                n1 = i+2;
            else {
                n2 = i+2;
                break;
            }
        }
        pp = p;
        p = S.at(i+2);
    }

    switch(n1+n2) {
        case 19:
            cout << "Do";
            break;
        case 15:
            cout << "Re";
            break;
        case 11:
            cout << "Mi";
            break;
        case 21:
            cout << "Fa";
            break;
        case 17:
            cout << "So";
            break;
        case 13:
            cout << "La";
            break;
        case 9:
            cout << "Si";
            break;
    }
    cout << endl;
}