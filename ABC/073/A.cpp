#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    if(N/10==9 || N%10==9)
        cout << "Yes";
    else
        cout <<  "No";
    cout << endl;
}