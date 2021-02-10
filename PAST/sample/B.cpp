#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, i, h, c = 0;
    cin >> N >> K;

    for(i = 0; i < N; i++) {
        cin >> h;
        c += (h >= K);
    }

    cout << c << endl;
}