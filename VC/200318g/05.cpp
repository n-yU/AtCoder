#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    set<char> k;
    k.insert('O');
    k.insert('P');
    k.insert('K');
    k.insert('L');

    cin >> c;
    if(k.count(c))
        cout << "Right";
    else
        cout << "Left";
    cout << endl;
}