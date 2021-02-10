#include <bits/stdc++.h>
using namespace std;

int main() {
    string A;
    int B;
    cin >> A >> B;
    cout << A.at(B%A.size() ? B%A.size()-1 : A.size()-1) << endl;
}