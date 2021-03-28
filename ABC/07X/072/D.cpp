#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,c=0;
    cin >> N;
    vector<int> p(N);

    rep(i,N)
        cin >> p.at(i);
    
    rep(i,N-1)
        if(p.at(i)-1 == i) {
            swap(p.at(i), p.at(i+1));
            c++;
        }
    if(p.at(N-1) == N) {
        swap(p.at(N-1), p.at(N-2));
        c++;
    }

    cout << c << endl;
}