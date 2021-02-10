#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,a,r=0;
    set<int> c;
    cin >> N;

    rep(i,N) {
        cin >> a;
        if(a >= 3200)
            r++;
        else
            c.insert(a/400);
    }

    cout << ((c.size()==0) ? 1 : c.size()) << " " << c.size()+r << endl;
}