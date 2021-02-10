#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,t,tt=0;
    string s,X;
    cin >> N;
    map<string,int> st;

    rep(i,N) {
        cin >> s >> t;
        tt += t;
        st[s] = tt;
    }

    cin >> X;

    cout << tt-st.at(X) << endl;
}