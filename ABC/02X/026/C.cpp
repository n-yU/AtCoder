#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int salary(int n, vector<vector<int>> b) {
    if(b.at(n).size() == 0)
        return 1;
    
    int t=0,mn=1e6,mx=0;
    rep(i,b.at(n).size()) {
        mn = min(mn, salary(b.at(n).at(i), b));
        mx = max(mx, salary(b.at(n).at(i), b));
    }
    return mn+mx+1;

}

int main() {
    int N,x;
    cin >> N;
    vector<vector<int>> B(N+1, vector<int>(0));

    rep(i,N-1) {
        cin >> x;
        B.at(x).push_back(i+2);
    }

    cout << salary(1,B) << endl;
}