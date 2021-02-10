#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,j,r=0,b=0,w=0;
    vector<string> S(5);
    cin >> N;
    vector<vector<int>> dp(3, vector<int>(N));

    for(i=0; i<5; i++)
        cin >> S.at(i);
    for(i=0; i<5; i++) {
        char c = S.at(i).at(0);
        if(c == 'R')
            r++;
        else if(c == 'B')
            b++;
        else if(c == 'W')
            w++;
    }
    dp.at(0).at(0) = 5-r;
    dp.at(1).at(0) = 5-b;
    dp.at(2).at(0) = 5-w;
    
    for(i=1; i<N; i++) {
        r=0, b=0, w=0;
        for(j=0; j<5; j++) {
            char c = S.at(j).at(i);
            if(c == 'R')
                r++;
            else if(c == 'B')
                b++;
            else if(c == 'W')
                w++;
        }
        dp.at(0).at(i) = 5-r + min(dp.at(1).at(i-1), dp.at(2).at(i-1));
        dp.at(1).at(i) = 5-b + min(dp.at(0).at(i-1), dp.at(2).at(i-1));
        dp.at(2).at(i) = 5-w + min(dp.at(0).at(i-1), dp.at(1).at(i-1));
    }

    cout << min(dp.at(0).at(N-1), min(dp.at(1).at(N-1), dp.at(2).at(N-1))) << endl;
}