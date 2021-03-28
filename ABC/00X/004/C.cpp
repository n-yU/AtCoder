#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cin >> N;

    rep(i,N%30)
        swap(arr.at(i%5), arr.at(i%5+1));
    rep(i,6)
        cout << arr.at(i);
    cout << endl;
}