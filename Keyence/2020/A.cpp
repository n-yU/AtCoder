#include <bits/stdc++.h>
using namespace std;

int main() {
    int H,W,N;
    cin >> H >> W >> N;
    cout << N/max(H,W) + (N%max(H,W)!=0) << endl;
}