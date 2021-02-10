#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C;
    string r = "NO";
    cin >> A >> B >> C;

    if(A==5 && B==5 && C==7)
        r = "YES";
    else if(A==5 && B==7 && C==5)
        r = "YES";
    else if(A==7 && B==5 && C==5)
        r = "YES";
    
    cout << r << endl;
}