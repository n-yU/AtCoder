#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N,r=0;
    string S;
    cin >> N >> S;
    map<char,int> l;
    set<char> f;

    rep(i,N) {
        if(!l.count(S.at(i)))
            l[S.at(i)] = 1;
        else
            l.at(S.at(i))++;
    }

    rep(i,N) {
        int c=0;
        l.at(S.at(i))--;
        if(l.at(S.at(i)) == 0)
            l.erase(S.at(i));

        f.insert(S.at(i));
        for(char t : f)
            if(l.count(t))
                c++;
        r = max(r,c);
    }

    cout << r << endl;
}