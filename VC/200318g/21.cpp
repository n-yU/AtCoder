#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,M,A,x=0,a;
    cin >> N >> M;
    map<int,int> m;

    rep(i,N) {
        cin >> A;
        if(m.count(A))
            ++m.at(A);
        else
            m[A] = 1;
    }

    for(auto p : m)
        if(p.second > x) {
            x = p.second;
            a = p.first;
        }
    if(x > N/2)
        cout << a;
    else
        cout << "?";
    cout << endl;
}