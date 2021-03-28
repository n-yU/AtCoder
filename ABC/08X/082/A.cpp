#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,m;
    cin >> a >> b;

    m = (a+b)/2;
    if((a+b)%2 == 0)
        cout << m;
    else
        cout << m+1;
    cout << endl;
}