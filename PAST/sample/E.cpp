#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M,i,j,P,Y,pp=-1;
    cin >> N >> M;
    vector<pair<pair<int,int>,int>> PY(M);
    vector<pair<int,string>> ID(M);

    for(i=0; i<M; i++) {
        cin >> PY.at(i).first.first >> PY.at(i).first.second;
        PY.at(i).second = i;
    }
    sort(PY.begin(), PY.end());

    for(i=0; i<M; i++) {
        string S;
        if(pp != PY.at(i).first.first)
            j = 1;
        pp = PY.at(i).first.first;
        ostringstream ss1, ss2;
        ss1 << setw(6) << setfill('0') << PY.at(i).first.first;
        ss2 << setw(6) << setfill('0') << j++;
        string s1(ss1.str()), s2(ss2.str());
        S = s1 + s2;
        ID.at(i).first = PY.at(i).second;
        ID.at(i).second = S;
    }
    sort(ID.begin(), ID.end());

    for(i=0; i<M; i++)
        cout << ID.at(i).second << endl;
}