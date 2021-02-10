#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    string S;
    cin >> N;

    rep(i,N) {
        cin >> S;
        sort(S.begin(), S.end());
        if(S == "ddeeinnow")
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}