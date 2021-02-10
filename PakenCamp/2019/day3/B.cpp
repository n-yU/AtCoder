#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,w=0,b=0;
    string S;
    cin >> N;

    for(i=0; i<N; i++) {
        cin >> S;
        if(S == "black")
            b++;
        else
            w++;
    }

    if(b>w)
        cout << "black";
    else
        cout << "white";
    cout << endl;
}