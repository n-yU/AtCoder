#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    cin >> N;
    vector<ll> L(N+1);
    L.at(0)=2, L.at(1)=1;

    rep(i,N-1)
        L.at(i+2) = L.at(i+1) + L.at(i);

    cout << L.at(N) << endl;
}