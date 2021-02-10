#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, a, b;
    cin >> X;

    a = X%100;
    b = X/100;
    if(b*5 >= a)
        cout << "1";
    else
        cout << "0";
    cout << endl;  
}