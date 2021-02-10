#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    vector<string> s;

    while(1) {
        string t;
        cin >> t;
        if(t == "")
            break;
        s.push_back(t);
    }

    rep(i,s.size()-1)
        cout << s.at(i)+",";
    cout << s.at(s.size()-1) << endl;
}