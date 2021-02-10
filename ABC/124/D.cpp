#include <bits/stdc++.h>
using namespace std;

typedef pair<int,char> P;

int main() {
    int N,K,i,m=0,t,l;
    string S;
    vector<int> h;
    cin >> N >> K >> S;
    char p=S.at(0);

    h.push_back(0);
    for(i=1; i<N; i++) {
        if(p != S.at(i))
            h.push_back(i);
        p = S.at(i);
    }
    h.push_back(N);

    l = h.size()-1;
    for(i=0; i<h.size()-1; i++) {
        if(S.at(h.at(i)) == '0')
            t = h.at(min(i+K*2, l));
        else
            t = h.at(min(i+K*2+1, l));
        m = max(m, t-h.at(i));
    }

    cout << m << endl;
}