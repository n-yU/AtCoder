#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,r=0;
    cin >> N;

    if(N < 105) {
        cout << 0 << endl;
        return 0;
    }
    rep(i,N) {
        int c = 0;
        for(int j=1; j<=i+1; j++)
            if((i+1)%j == 0)
                c++;
        if(c == 8)
            r++;
        i++;
    }

    cout << r << endl;
}