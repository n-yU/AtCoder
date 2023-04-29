#include <bits/stdc++.h>
using namespace std;

int main() {
	double n,m,r1,r2;
	cin >> n >> m;

	r1 = ((int)n%12+m/60)*30;
	r2 = m*6;

	cout << setprecision(10) << min(abs(r2-r1), 360-abs(r2-r1))  << endl;
}