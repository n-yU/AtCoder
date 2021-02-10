#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,j,r=0,x;
    cin >> N;
    vector<int> L(N);

    for(i=0; i<N; i++)
        cin >> L.at(i);
    sort(L.begin(), L.end());

    for(i=N-2; i>=1; i--)
        for(j=i-1; j>=0; j--) {
            x = distance(lower_bound(L.begin(), L.end(), L.at(i)+L.at(j)), L.end());
            r += N-1-i-x;
        }
    
    cout << r << endl;
}
