#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,r;
    cin >> n;
    vector<int> a(n);

    for(i=0; i<n; i++)
        cin >> a.at(i);
    sort(a.begin(), a.end());

    for(i=0; i<n-1; i++)
        if(a.at(i) >= a.at(a.size()-1)/2)
            break;
    if(i == n-1)
        r = a.at(i-1);
    else if(abs(a.at(a.size()-1)/2-a.at(i)) > abs(a.at(a.size()-1)/2-a.at(i-1)))
        r = a.at(i-1);
    else
        r = a.at(i);

    cout << a.at(a.size()-1) << " " << r << endl;
}