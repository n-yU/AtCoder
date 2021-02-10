#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,al=0,bb=0;
    cin >> N;
    vector<int> a(N);
    rep(i,N)
        cin >> a.at(i);
    sort(a.begin(), a.end(), greater<int>());

    rep(i,N)
        if(i%2)
            bb += a.at(i);
        else
            al += a.at(i);
    
    cout << al-bb << endl;
}