#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int s,r;
    vector<int> a;
    set<int> t;
    cin >> s;

    a.push_back(s);
    t.insert(s);
    rep(i,1e6+10) {
        if(a.at(i)%2)
            a.push_back(3*a.at(i)+1);
        else
            a.push_back(a.at(i)/2);

        if(!t.count(a.at(i+1)))
            t.insert(a.at(i+1));
        else {
            r = i+2;
            break;
        }
    }

    cout << r << endl;
}