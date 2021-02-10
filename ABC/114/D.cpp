#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

vector<int> pf(101,0);

void primeFact(int n) {
    for(int i=2; i*i<=n; i++)
        while(n%i == 0) {
            pf.at(i)++;
            n /= i;
        }
    
    if(n != 1)
        pf.at(n)++;
}

int cntPFE(int x) {
    int c=0;
    rep(i,101)
        if(pf.at(i) > x-2)
            c++;
    return c;
}

int main() {
    int N,j,k,r=0,l;
    vector<int> pf2;
    cin >> N;

    rep(i,N)
        primeFact(i+1);
    
    cout << cntPFE(75)+cntPFE(25)*(cntPFE(3)-1)+cntPFE(15)*(cntPFE(5)-1)+cntPFE(5)*(cntPFE(5)-1)*(cntPFE(3)-2)/2 << endl;
}