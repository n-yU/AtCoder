#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    char S;
    set<char> t;
    cin >> N;

    rep(i,N) {
        cin >> S;
        t.insert(S);
    }

    if(t.size() == 3)
        cout << "Three";
    else
        cout << "Four";
    cout << endl;
}