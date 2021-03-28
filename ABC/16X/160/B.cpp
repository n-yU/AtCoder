#include <bits/stdc++.h>
using namespace std;

int main() {
    int X,r=0;
    cin >> X;
    r += X/500 * 1000;
    r += (X%500)/5 * 5;

    cout << r << endl;
}