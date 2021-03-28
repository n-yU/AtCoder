#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,x,r,t;
    cin >> a >> b >> x;

    if(x < (a*a*b)/2) {
        r = (2*x)/(a*b);
        t = 90-(atan(r/b)*180)/M_PI;
    } else {
        r = 2*b-(2*x)/(a*a);
        t = (atan(r/a)*180)/M_PI;
    }

    cout << setprecision(12) << t << endl;
}