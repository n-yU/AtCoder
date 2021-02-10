#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,t=0,x=0;
    cin >> N;
    vector<int> s(N);

    rep(i,N) {
        cin >> s.at(i);
        t += s.at(i);
    }
    sort(s.begin(), s.end());

    if(t%10 == 0) {
        while(s.at(x)%10 == 0) {
            x++;
            if(x == N)
                break;
        }
        if(x != N)
            t -= s.at(x);
        else
            t = 0;
    }
    cout << t << endl;
}