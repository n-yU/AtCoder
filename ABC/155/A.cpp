#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B >> C;
    if((A==B && B!=C) || (B==C && C!=A) || (C==A && A!=B))
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
}