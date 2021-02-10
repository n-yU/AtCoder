#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main() {
    int N,K;
    double r=0;
    cin >> N >> K;
    vector<int> R(N);
    rep(i,N)
        cin >> R.at(i);
    sort(R.begin(), R.end());

    rep(i,K) {
        r += R.at(N-K+i);
        r /= 2;
    }

    cout << setprecision(10) << r << endl;
}