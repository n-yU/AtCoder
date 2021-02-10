#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string S;
    int r=0;
    cin >> S;
    
    rep(i,S.size())
        if(i%2)
            r -= S.at(i)-'0';
        else
            r += S.at(i)-'0';
    
    cout << r << endl;
}