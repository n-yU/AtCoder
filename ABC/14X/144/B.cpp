#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i;
    cin >> N;

    for(i=1; i<=9; i++)
        if(N%i==0 && N/i<=9) {
            cout << "Yes" << endl;
            return 0;
        }
    
    cout << "No" << endl;
}