#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,N,f=0;
    string S,r="";
    cin >> S;
    N = S.size();
    vector<string> w;

    for(i=1; i<N; i++) {
        if(S.at(i) >= 'A' && S.at(i) <= 'Z') {
            if(f != -1) {
                w.push_back(S.substr(f, i-f+1));
                f = -1;
            } else {
                f = i;
            }
        }
    }

    for(i=0; i<w.size(); i++) {
        w.at(i).at(0) += 32;
        w.at(i).at(w.at(i).size()-1) += 32;
    }
    sort(w.begin(), w.end());

    for(i=0; i<w.size(); i++) {
        w.at(i).at(0) -= 32;
        w.at(i).at(w.at(i).size()-1) -= 32;
        r += w.at(i);
    }
    cout << r << endl;
}