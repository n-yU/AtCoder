#include <bits/stdc++.h>
using namespace std;

int main() {
    int i;
    string S;
    cin >> S;

    for(i=0; i<3; i++)
        if(S.at(i) < '0' || S.at(i) > '9')
            break;
    
    if(i != 3)
        cout << "error";
    else
        cout << ((S.at(0)-'0')*100 + (S.at(1)-'0')*10 + (S.at(2)-'0'))*2;
    cout << endl;
}