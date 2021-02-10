#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,j,c=0;
    double s=0;
    cin >> N;
    vector<pair<double,double>> p(N);

    for(i=0; i<N; i++)
        cin >> p.at(i).first >> p.at(i).second;

    for(i=0; i<N; i++)
        for(j=i; j<N; j++)
            s += sqrt( pow((p.at(i).first-p.at(j).first), 2) + pow((p.at(i).second-p.at(j).second), 2) );
    c = (N-1)*N/2;
    
    cout << setprecision(20) << s * ((double)(N-1)/c)<< endl;
}