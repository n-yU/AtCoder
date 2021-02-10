#include <bits/stdc++.h>
using namespace std;

int main() {
    int H,A,r;
    cin >> H >> A;

    r = H/A;
    if(H%A)
        r++;
    cout << r << endl;
}