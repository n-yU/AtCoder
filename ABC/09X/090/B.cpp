#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int A,B,r=0;
    cin >> A >> B;

    rep(i,B-A+1) {
        string s = to_string(A+i);
        if(s.at(0)==s.at(4) && s.at(1)==s.at(3))
            r++;
    }

    cout << r << endl;
}