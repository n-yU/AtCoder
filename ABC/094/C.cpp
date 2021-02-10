#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i;
    cin >> N;
    vector<int> X(N),t;

    for(i=0; i<N; i++)
        cin >> X.at(i);
    t = X;
    sort(X.begin(), X.end());

    for(i=0; i<N; i++)
        if(t.at(i) <= X.at(X.size()/2-1))
            cout << X.at(X.size()/2) << endl;
        else if(t.at(i) >= X.at(X.size()/2))
            cout << X.at(X.size()/2-1) << endl;
}