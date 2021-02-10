#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,b=0;
    cin >> N;

    if(N%2==0)
        b--;

    cout << N/2 + b << endl;
}