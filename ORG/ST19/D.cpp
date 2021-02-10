#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,j,k,l,m;
    string S,t,ds="";
    set<string> ps;
    set<char> pd;
    cin >> N >> S;

    for(i=0; i<N; i++)
        pd.insert(S.at(i));
    m = pd.size();

    for(auto x : pd)
        ds += x;
    
    for(i=0; i<m; i++)
        for(j=0; j<m; j++)
            for(k=0; k<m; k++) {
                int d1=-1,d2=-1,d3=-1;
                for(l=0; l<N; l++) {
                    if(d1==-1 && S.at(l)==ds.at(i))
                        d1 = l;
                    else if(d1!=-1 && d2==-1 && S.at(l)==ds.at(j))
                        d2 = l;
                    else if(d1!=-1 && d2!=-1 && d3==-1 && S.at(l)==ds.at(k)) {
                        d3 = l;
                        break;
                    }
                }
                if(d1!=-1 && d2!=-1 && d3!=-1) {
                    t = "";
                    t += S.at(d1);
                    t += S.at(d2);
                    t += S.at(d3);
                    ps.insert(t);
                }
            }
    
    cout << ps.size() << endl;
}