#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> N(6);

    for(int i=0; i<6; i++)
        cin >> N.at(i);
    sort(N.begin(), N.end());

    cout << N.at(3) << endl;
}