#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if(A>9 || B>9)
        cout << -1;
    else
        cout << A*B;
    cout << endl;    
}