#include <bits/stdc++.h>
using namespace std;

int pp[8]={1,2,3,4,5,6,7,8};

int main() {
    int N,i,a,b,c=0;
    cin >> N;
    vector<int> P(N),Q(N);

    for(i=0; i<N; i++)
        cin >> P.at(i);
    for(i=0; i<N; i++)
        cin >> Q.at(i);
    
    do {
        c++;
        for(i=0; i<N; i++)
            if(P.at(i) != pp[i])
                break;
        if(i == N)
            a = c;
        for(i=0; i<N; i++)
            if(Q.at(i) != pp[i])
                break;
        if(i == N)
            b = c;
    } while(next_permutation(pp, pp+N));

    cout << abs(a-b) << endl;
}