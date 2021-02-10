#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    ll N,t,r1=0,r2=0;
    map<ll,int> A;
    cin >> N;

    rep(i,N) {
        cin >> t;
        if(A.count(t))
            A.at(t)++;
        else
            A[t] = 1;
    }

    for(auto p : A) {
        if(p.second > 3) {
            r1 = p.first;
            r2 = p.first;
        } else if(p.second > 1) {
            r1 = r2;
            r2 = p.first;
        }
    }

    cout << r1*r2 << endl;
}