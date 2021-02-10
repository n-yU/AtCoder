#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int INF=1e9+7;

int main() {
    int N,i,c=0,m=INF,mi=-1;
    ll r=0;
    cin >> N;
    vector<int> A(N);

    for(i=0; i<N; i++) {
        cin >> A.at(i);
        if(A.at(i)<0)
            c++;
        if(abs(A.at(i)) < m) {
            m = abs(A.at(i));
            mi = i;
        }
    }

    if(c%2) {
        for(i=0; i<N; i++) {
            if(i != mi)
                r += abs(A.at(i));
            else
                r -= abs(A.at(i));
        }
    } else {
        for(i=0; i<N; i++)
            r += abs(A.at(i));
    }

    cout << r << endl;
}