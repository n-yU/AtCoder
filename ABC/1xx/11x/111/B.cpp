#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,t;
    cin >> N;

    t = N/100*111;
    if(N <= t)
        cout << t;
    else
        cout << (N/100+1)*111;
    cout << endl;
}