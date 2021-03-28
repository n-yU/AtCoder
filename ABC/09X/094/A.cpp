#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,X;
    cin >> A >> B >> X;
    cout << ((A<=X && X<=A+B) ? "YES" : "NO") << endl;
}