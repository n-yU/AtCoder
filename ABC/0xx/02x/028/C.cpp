#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int i,j,k;
    vector<int> n(5),s;
    rep(i,5)
        cin >> n.at(i);
    
    for(i=0; i<3; i++)
        for(j=i+1; j<4; j++)
            for(k=j+1; k<5; k++)
                s.push_back(n.at(i)+n.at(j)+n.at(k));
    sort(s.begin(), s.end(), greater<int>());
    cout << s.at(2) << endl;
}