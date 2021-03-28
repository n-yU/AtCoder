#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;

int main() {
    P a,b,c;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;
    cout << setprecision(10) << abs((a.first-c.first)*(b.second-c.second)
        -(b.first-c.first)*(a.second-c.second))/2.0 << endl;
}