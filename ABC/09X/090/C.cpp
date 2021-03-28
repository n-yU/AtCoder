#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll N,M;
    cin >> N >> M;

    if(N > 1)
        N -= 2;
    if(M > 1)
        M -= 2;
    cout << N*M << endl;
}