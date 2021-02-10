#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    cin >> N;
    vector<string> s(N);
    rep(i,N)
        cin >> s.at(i);

    rep(i,N) {
        rep(j,N)
            cout << s.at(N-1-j).at(i);
        cout << endl;
    }
}