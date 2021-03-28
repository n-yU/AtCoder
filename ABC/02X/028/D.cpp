#include <bits/stdc++.h>
using namespace std;

int main() {
    double N,K,r=0;
    cin >> N >> K;

    r += (N-K) * (K-1) * 6;
    r += (N-1) * 3;
    r++;
    cout << setprecision(15) <<  r / pow(N,3) << endl;
}