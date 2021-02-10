#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    int t;

    if(x==0 || y==0)
        return max(x,y);
    
    if(x<y)
        swap(x,y);
    do {
        t = x%y;
        x = y;
        y = t;
    } while(y != 0);
    return x;
}

int main() {
    int N,i,m=1;
    cin >> N;
    vector<int> A(N),L(N+1),R(N+2);
    L.at(0)=0, R.at(N+1)=0;

    for(i=0; i<N; i++) {
        cin >> A.at(i);
        L.at(i+1) = gcd(L.at(i), A.at(i));
    }
    for(i=0; i<N; i++)
        R.at(N-i) = gcd(R.at(N+1-i), A.at(N-1-i));
    for(i=0; i<N; i++)
        m = max(m, gcd(L.at(i), R.at(i+2)));
        
    cout << m << endl;
}