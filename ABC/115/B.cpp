#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,r=0;
    cin >> N;
    vector<int> p(N);

    for(i=0; i<N; i++)
        cin >> p.at(i);
    sort(p.begin(), p.end());

    for(i=0; i<N-1; i++)
        r += p.at(i);
    r += p.at(N-1)/2;

    cout << r << endl;
}