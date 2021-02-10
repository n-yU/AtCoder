#include <bits/stdc++.h>
using namespace std;

using ll=long long;

ll cmb(ll c) {
    return c*(c-1)/2;
}

int main() {
    ll N,i,c=1,a=0;
    string t;
    cin >> N;
    vector<string> s(N);

    for(i=0; i<N; i++) {
        cin >> s.at(i);
        sort(s.at(i).begin(), s.at(i).end());
    }
    sort(s.begin(), s.end());

    t = s.at(0);
    for(i=1; i<N; i++) {
        if(t != s.at(i)) {
            t = s.at(i);
            a += cmb(c);
            c = 0;
        }
        c++;
    }
    a += cmb(c);

    cout << a << endl;
}