#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,a,c2=0,c4=0,r=0;
    cin >> N;
    
    rep(i,N) {
        cin >> a;
        if(a%4 == 0)
            c4++;
        else if(a%2 == 0)
            c2++;
    }

    if(N%2 && c4)
        r++;
    r += c4*2 + c2;

    if(r >= N)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
}