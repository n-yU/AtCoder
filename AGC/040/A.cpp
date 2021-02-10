#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    int i,j,z;
    ll res=0;
    bool ct=0;
    string S;
    cin >> S;
    vector<int> d, r(S.size()+1, 0);

    if(S.at(0) == '<') {
        d.push_back(i);
        ct = 1;
    }

    for(i=0; i<S.size(); i++)
        if(!ct && S.at(i)=='<') {
            d.push_back(i);
            ct = 1;
        } else if(S.at(i) == '>')
            ct = 0;

    for(int x : d) {
        z = 1;
        for(j=x-1; j>=0; j--) {
            if(S.at(j) == '>')
                r.at(j) = z++;
            else
                break;
        }
    }

    if(S.at(S.size()-1) == '>') {
        z = 1;
        for(i=S.size()-1; i>=0; i--) {
            r.at(i) = z++;
            if(i!=0 && S.at(i-1)=='<')
                break;
        }
    }
    
    for(int x : d) {
        z = 1;
        for(j=x; j<S.size(); j++) {
            if(S.at(j) == '<') {
                if(z+1 <= r.at(j+1))
                    continue;
                r.at(j+1) = z++;
            } else
                break;
        }
    }

    for(int x : r)
        res += x;
    cout << res << endl;
}