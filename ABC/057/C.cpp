#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N,i,r=20,t;
    cin >> N;

    for(i=1; i*i<=N; i++) {
        if(N%i == 0)
            t = max(to_string(i).size(), to_string(N/i).size());
        r = min(r,t);
    }
        
    cout << r << endl;
}