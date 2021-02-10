#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
    int i,n,r=INF;
    cin >> n;

    for(i=0; i*i<n; ++i) {
        int h=n/(i+1), w=n/h;
        r = min(r, abs(w-h)+n-(w*h));
    }

    cout << r << endl;
}