#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string S;
    cin >> S;
    map<char,int> m;
    m['0']=0, m['1']=0;

    rep(i,S.size())
        ++m.at(S.at(i));

    cout << min(m.at('0'),m.at('1'))*2 << endl;
}