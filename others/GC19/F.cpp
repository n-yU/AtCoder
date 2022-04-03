// Score: 13/100

#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N, i, a=0;
    cin >> H >> W >> N;

    vector<pair<int,int>> p(N);
    for(i=0; i<N; i++) {
        cin >> p.at(i).second >> p.at(i).first;
        p.at(i).first--;
        p.at(i).second--;
    }
    sort(p.begin(), p.end());
    
    for(i=0; i<N-1; i++) {
        int d = p.at(i+1).first-p.at(i).first;
        if(d > 1)
            a++;
    }

    if(N != 0) {
        if(p.at(0).first != 0)
            a++;
        if(p.at(N-1).first != W-1)
            a++;
        cout << a << endl;
    } else {
        cout << 1 << endl;
    }
}