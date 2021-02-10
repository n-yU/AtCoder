#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,j,t;
    cin >> N;
    vector<int> C(N-1), S(N-1), F(N-1);

    for(i=0; i<N-1; i++)
        cin >> C.at(i) >> S.at(i) >> F.at(i);
    
    for(i=0; i<N; i++) {
        int t=0;
        for(j=i; j<N-1; j++) {
            if(t < S.at(j))
                t = S.at(j);
            else if(t%F.at(j) != 0)
                t = t+F.at(j)-t%F.at(j);
            t += C.at(j);
        }
        cout << t << endl;
    }
}