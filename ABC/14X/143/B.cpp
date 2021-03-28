#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,j,s=0;
    cin >> N;
    vector<int> d(N);

    for(i=0; i<N; i++)
        cin >> d.at(i);

    for(i=0; i<N-1; i++)
        for(j=i+1; j<N; j++) {
            if(i==j)
                continue;
            s += d.at(i)*d.at(j);
        }
    
    cout << s << endl;
}