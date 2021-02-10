#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int p=0, c=0;
    
    while(p < S.size()-1) {
        if(S.at(p) != S.at(p+1)) {
            if(p < S.size()-2)
                S = S.substr(0,p)+S.substr(p+2);
            else
                S = S.substr(0,p+1);
            if(p!=0 && S.at(p)!=S.at(p-1))
                --p;
            c += 2;
        } else
            ++p;
        }
  
  cout << c << endl;
}