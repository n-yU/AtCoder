#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,K,r=0;
    cin >> N >> K;

    while(N > 0) {
        N /= K;
        r++;
    }

    cout << r << endl;
}