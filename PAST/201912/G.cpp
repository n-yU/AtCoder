#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,j;
    cin >> N;
    vector<vector<int>> a(N, vector<int>(N));

    for(i=1; i<N; i++)
        for(j=i+1; j<N; j++)
            cin >> a.at(i).at(j);
    
    for(i=0; i<N; i++)
        for(j=0; j<=i; j++) {
            if(i==j)
                a.at(i).at(j) = 0;
            else
                a.at(i).at(j) = a.at(j).at(i);
        }
}