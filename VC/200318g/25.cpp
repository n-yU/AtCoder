#include <bits/stdc++.h>
using namespace std;

int leapYear(int x) {
    return x/4-x/100+x/400;
}

int main() {
    int A,B;
    cin >> A >> B;
    cout << leapYear(B)-leapYear(A-1) << endl;
}