#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> n(3);
    for(int i=0; i<3; i++)
        cin >> n.at(i);
    sort(n.begin(), n.end());
    cout << n.at(0)*n.at(1)/2 << endl;
}