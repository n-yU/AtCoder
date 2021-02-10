#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,x,c=0;
    cin >> N;

    rep(i,N/25) {
        int x = (i+1)*25;
        if(x%25 && x%2525 && x%252525 && x%25252525)
            continue;
        else
            ++c;
    }

    cout << c << endl;
}