#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;
    cout << ((B%A) ? B/A+1 : B/A) << endl;
}