#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ll s=0;
    int N,M,i,t;
    cin >> N >> M;
    priority_queue<int> A;

    for(i=0; i<N; i++) {
        cin >> t;
        A.push(t);
    }

    for(i=0; i<M; i++) {
        A.push(A.top()/2);
        A.pop();
    }

    while(!A.empty()) {
        s += A.top();
        A.pop();
    }

    cout << s << endl;
}