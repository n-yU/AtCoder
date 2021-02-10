#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ll H,W,K,V,i,j,k,l,m=0;
    cin >> H >> W >> K >> V;
    vector<vector<ll>> A(H, vector<ll>(W));

    for(i=0; i<H; i++)
        for(j=0; j<W; j++)
            cin >> A.at(i).at(j);
    
    for(i=1; i<H; i++)
        for(j=0; j<W; j++)
            A.at(i).at(j) += A.at(i-1).at(j);
        
    for(i=0; i<H; i++) {
        for(j=0; j<W; j++)
            for(k=i; k<H; k++) {
                ll t = 0;
                for(l=j; l<W; l++) {
                    t += A.at(k).at(l);
                    if(t+(k-i+1)*(l-j+1)*K <= V)
                        m = max(m, (k-i+1)*(l-j+1));
                }
            }
        for(j=i+1; j<H; j++)
            for(k=0; k<W; k++)
                A.at(j).at(k) -= A.at(i).at(k);
    }
    
    cout << m << endl;
}