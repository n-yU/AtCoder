#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i;
    string s,p;
    set <string> W;

    cin >> N >> p;
    W.insert(p);

    for(i=1; i<N; i++) {
        cin >> s;
        if(!W.count(s) && p.at(p.size()-1)==s.at(0))
            W.insert(s);
        else
            break;
        p = s;
    }

    cout << ((i==N) ? "Yes" : "No") << endl;
}