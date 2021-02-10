#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    int N,M,i,j,k;
    ll m=0, tm;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M));

    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            cin >> A.at(i).at(j);

    for(i=0; i<M; i++)
        for(j=i+1; j<M; j++) {
            tm = 0;
            for(k=0; k<N; k++)
                tm += max(A.at(k).at(i), A.at(k).at(j));
            m = max(m,tm);
        }

    cout << m << endl;
}