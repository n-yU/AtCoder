#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T, i, m=1001;
    cin >> N >> T;
    vector<pair<int, int>> ct(N);

    for(i = 0; i < N; i++)
        cin >> ct.at(i).second >> ct.at(i).first;
    sort(ct.begin(), ct.end(), greater<pair<int,int>>());

    for(i = 0; i < N; i++) {
        if(ct.at(i).first > T)
            continue;
        m = min(m, ct.at(i).second);
    }

    if(m != 1001)
        cout << m;
    else
        cout << "TLE";
    cout << endl;
}