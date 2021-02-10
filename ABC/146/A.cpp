#include <bits/stdc++.h>
using namespace std;

int main() {
    int d;
    string S;
    cin >> S;

    if(S == "SUN")
        d = 7;
    else if(S == "MON")
        d = 6;
    else if(S == "TUE")
        d = 5;
    else if(S == "WED")
        d = 4;
    else if(S == "THU")
        d = 3;
    else if(S == "FRI")
        d = 2;
    else
        d = 1;

    cout << d << endl;
}