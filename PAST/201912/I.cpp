#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int INF = 1e9+7;
ll dp[1025];

int main() {
    ll N,M,i,j,t;
    cin >> N >> M;
    vector<string> S(M);
    vector<ll> C(M);

    for(i=0; i<M; i++)
        cin >> S.at(i) >> C.at(i);
    
    for(i=0; i<(1<<N); i++)
        dp[i] = INF;
    dp[0] = 0;

    for(i=0; i<M; i++) {
        t = 0;
        for(j=0; j<N; j++)
            if(S.at(i).at(j) == 'Y')
                t |= (1 << j);
        for(j=0; j<(1<<N); j++)
            dp[j|t] = min(dp[j|t], dp[j]+C.at(i));
    }

    cout << ((dp[(1<<N)-1]==INF) ? -1 : dp[(1<<N)-1]) << endl;
}