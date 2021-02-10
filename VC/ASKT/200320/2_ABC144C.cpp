#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e15;

int main() {
    ll N,m=INF;
    cin >> N;
    
    for(ll i=1; i*i<=N; ++i)
        if(N%i == 0)
            m =min(m,i+N/i-2);

    cout << m << endl;
}