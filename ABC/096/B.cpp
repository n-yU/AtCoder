#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int K;
    vector<int> n(3);

    rep(i,3)
        cin >> n.at(i);
    cin >> K;
    sort(n.begin(), n.end());

    cout << n.at(0)+n.at(1)+n.at(2)*pow(2,K) << endl;
}