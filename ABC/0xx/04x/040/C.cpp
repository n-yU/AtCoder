#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    cin >> N;
    vector<int> a(N),dp(N,0);
    rep(i,N)
        cin >> a.at(i);
    
    dp.at(1) = abs(a.at(0)-a.at(1));
    rep(i,N-2)
        dp.at(i+2) = min(abs(a.at(i+2)-a.at(i))+dp.at(i), abs(a.at(i+2)-a.at(i+1))+dp.at(i+1));

    cout << dp.at(N-1) << endl;
}