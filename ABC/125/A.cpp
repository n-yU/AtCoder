#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,T;
    cin >> A >> B >> T;
    if(T-A<0)
        cout << 0;
    else
        cout << T/A*B;
    cout << endl;
}