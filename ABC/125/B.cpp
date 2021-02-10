#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,C,r=0;
    cin >> N;
    vector<int> V(N);

    for(i=0; i<N; i++)
        cin >> V.at(i);
    for(i=0; i<N; i++) {
        cin >> C;
        if(V.at(i)-C>0)
            r += V.at(i)-C;
    }

    cout << r << endl;
}