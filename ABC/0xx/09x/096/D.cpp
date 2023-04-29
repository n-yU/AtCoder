#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,c=0;
    cin >> N;

    rep(i,55556) {
        int t = i+2;

        bool isP=0;
        for(int j=2; j*j<=t; j++)
            if(t%j == 0)    
                isP = 1;
        
        if(!isP && t%5==1) {
            cout << t;
            c++;
            if(c == N)
                break;
            cout << " ";
        }
    }
}