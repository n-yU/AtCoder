#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int od=0,ev=0;
    string N;
    cin >> N;

    rep(i,N.size())
        if((N.size()-i)%2)
            ev += N.at(i)-'0';
        else
            od += N.at(i)-'0';

    cout << od << " " << ev << endl;
}