#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    int N,t;
    cin >> a >> b;

    a += b;
    N = atoi(a.c_str());

    t = sqrt(N);
    if(t*t == N)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
}