#include <bits/stdc++.h>
using namespace std;

int s[3] = {300000, 200000, 100000};

int main() {
    int X, Y, r=0;
    cin >> X >> Y;

    if(X<=3)
        r += s[X-1];
    if(Y<=3)
        r += s[Y-1];
    if(X==1 && Y==1)
        r += 400000;

    cout << r << endl;
}