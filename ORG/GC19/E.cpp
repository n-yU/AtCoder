#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,L,i,j;
    cin >> N >> L;
    vector<pair<int, pair<double,double>>> C(N+2);

    C.at(0).first = 0;
    cin >> C.at(0).second.first >> C.at(0).second.second;
    for(i=1; i<N+1; i++)
        cin >> C.at(i).first >> C.at(i).second.first >> C.at(i).second.second;
    C.at(N+1).first = L;
    C.at(N+1).second.first = 0;
    C.at(N+1).second.second = 0;
    sort(C.begin(), C.end());
    
    vector<double> dp(N+2, -1);
    dp.at(0) = 0.0;

    for(i=0; i<N+1; i++) {
        if(i!=0 && dp.at(i)==-1)
            break;
        for(j=i+1; j<N+2; j++) {
            if(C.at(i).first+C.at(i).second.second >= C.at(j).first) {
                if(dp.at(j) == -1)
                    dp.at(j) = dp.at(i) + (C.at(j).first-C.at(i).first) / C.at(i).second.first;
                else
                    dp.at(j) = min(dp.at(j), dp.at(i)+(C.at(j).first-C.at(i).first)/C.at(i).second.first);
                
            } else
                break;
        }
    }

    if(dp.at(N+1) == -1)
        cout << "impossible" << endl;
    else
        printf("%.15lf", dp.at(N+1));
}