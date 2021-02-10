#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i;
    string S;
    cin >> N >> S;

    for(i=0; i<S.size(); i++) {
        S.at(i) += N;
        if(S.at(i) > 90)
            S.at(i) = S.at(i)-26;
    }

    cout << S << endl;
}