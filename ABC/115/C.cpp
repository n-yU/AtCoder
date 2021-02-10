#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int main() {
    int N,K,i,m=INF;
    cin >> N >> K;
    vector<int> h(N);

    for(i=0; i<N; i++)
        cin >> h.at(i);
    sort(h.begin(), h.end());

    for(i=0; i<=N-K; i++)
        m = min(m, h.at(i+K-1)-h.at(i));

    cout << m << endl;
}