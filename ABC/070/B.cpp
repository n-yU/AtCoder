#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C,D,s,f;
    cin >> A >> B >> C >> D;
    s = max(A,C);
    f = min(B,D);
    cout << ((f-s > 0) ? f-s : 0) << endl;
}