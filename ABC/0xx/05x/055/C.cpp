#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N,M,t,r;
    cin >> N >> M;
    
    t = M-N*2;
    if(t >= 0)
        r = t/4 + N;
    else
        r = M/2;

    cout << r << endl;
}