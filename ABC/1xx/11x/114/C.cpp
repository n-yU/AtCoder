#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

vector<int> r;

void v753(int n) {
    if(to_string(n).size() == 9)
        return;
    int n3=n*10+3, n5=n*10+5, n7=n*10+7;
    r.push_back(n3);
    r.push_back(n5);
    r.push_back(n7);
    v753(n3);
    v753(n5);
    v753(n7);
}

int main() {
    int N,c=0;
    cin >> N;
    v753(0);

    rep(i,r.size()) {
        set<char> s;
        int t = r.at(i);
        string ts=to_string(t);

        rep(i,ts.size())
            s.insert(ts.at(i));

        if(s.size()==3 && t<=N)
            c++;
    }
    
    cout << c << endl;
}