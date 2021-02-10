#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int at[7] = {'a','t','c','o','d','e','r'};

int main() {
    string S,T;
    cin >> S >> T;

    rep(i,S.size()) {
        if(S.at(i) == T.at(i))
            continue;

        bool cs=1,ct=1;
        if(S.at(i) != '@')
            cs = 0;
        if(T.at(i) != '@')
            ct = 0;
        
        if(cs || ct)
            rep(j,7) {
                if(S.at(i) == at[j])
                    cs = 1;
                if(T.at(i) == at[j])
                    ct = 1;
            }

        if(cs && ct)
            continue;

        cout << "You will lose" << endl;
        return 0;
    }

    cout << "You can win" << endl;
}