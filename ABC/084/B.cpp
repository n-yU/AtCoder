#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,i;
    string S;
    cin >> A >> B >> S;
    
    for(i=0; i<S.size(); i++)
        if(i==A && S.at(i)!='-')
            break;
        else if(i!=A && S.at(i)=='-')
            break;

    cout << ((i==S.size()) ? "Yes" : "No") << endl;
}