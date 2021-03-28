#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,f=0,b=0;
    string S;
    cin >> N >> S;

    rep(i,N)
        if(S.at(i) == '(') {
            f++;
        } else {
            if(f > 0)
                f--;
            else
                b++; 
        }

    rep(i,b)
        cout << '(';
    cout << S;
    rep(i,f)
        cout << ')';
    cout << endl;
}