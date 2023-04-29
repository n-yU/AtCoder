#include <bits/stdc++.h>
using namespace std;

int main() {
	double A,B,H,M,rH,rM,Ax,Ay,Bx,By;
	cin >> A >> B >> H >> M;

	rM = M*M_PI/30;
	rH = H*M_PI/6 + M*M_PI/360;

	Ax = cos(rH)*A;
	Ay = sin(rH)*A;
	Bx = cos(rM)*B;
	By = sin(rM)*B;

	cout << setprecision(100) << sqrt((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By)) << endl;
}