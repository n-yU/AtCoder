#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    rep(i,N)
        cin >> A.at(i);
    sort(A.begin(), A.end());

    cout << A.at(N-1)-A.at(0) << endl;
}