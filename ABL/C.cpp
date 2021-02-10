#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

void dfs(const vector<set<int>> &G, vector<bool> &s, int x) {
    s[x] = true;
    for(auto n : G[x])
        if(!s[n])
            dfs(G, s, n);
}

int main() {
    int N, M, r = 0;
    cin >> N >> M;
    vector<set<int>> G(N);
    vector<bool> s(N, false);

    rep(i, M) {
        int A, B;
        cin >> A >> B;
        --A, --B;

        G[A].insert(B);
        G[B].insert(A);
    }

    rep(i, N)
        if(!s[i]) {
            dfs(G, s, i);
            ++r;
        }

    cout << r - 1 << endl;
}
