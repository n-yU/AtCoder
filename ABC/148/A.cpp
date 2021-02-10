#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,n;
    cin >> A >> B;
    if(A+B == 3)
        n = 3;
    else if(A+B == 5)
        n = 1;
    else
        n = 2;
    
    cout << n << endl;
}