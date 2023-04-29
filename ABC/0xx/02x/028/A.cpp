#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    if(N == 100)
        cout << "Perfect";
    else if(N >= 90)
        cout << "Great";
    else if(N >= 60)
        cout << "Good";
    else
        cout << "Bad";
    cout << endl;
}