#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
const double PI = acos(-1);

int main() {
    double N,a=0;
    cin >> N;
    vector<double> R(N);

    rep(i,N)
        cin >> R.at(i);
    sort(R.begin(), R.end(), greater<double>());

    rep(i,N) {
        double t = R.at(i);
        if(i%2)
            a -= t*t;
        else
            a += t*t;
    }
    cout << setprecision(10) << a*PI << endl;
}