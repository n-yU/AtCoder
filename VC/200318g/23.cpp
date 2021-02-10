#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,p;
    cin >> N;
    vector<int> K(N-1);
    rep(i,N-1)
        cin >> K.at(i);

    p = K.at(0);
    cout << p << " ";
    rep(i,N-2) {
        if(p < K.at(i+1))
            cout << p << " ";
        else
            cout << K.at(i+1) << " ";
        p = K.at(i+1);
    }

    if(K.at(N-2) < p)
        cout << K.at(N-2);
    else
        cout << p;
    cout << endl;
}