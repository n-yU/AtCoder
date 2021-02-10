#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const double INF = 1e9+7;

int main() {
	int N;
	double sx,sy,r=INF;
	cin >> sx >> sy >> N;
	vector<double> x(N),y(N);

	rep(i,N)
		cin >> x.at(i) >> y.at(i);
	
	rep(i,N) {
		double t1x,t1y,t2x,t2y,a=0,b,d;
		t1x=x.at(i), t1y=y.at(i);
		t2x=x.at((i+1)%N), t2y=y.at((i+1)%N);

		if(t2x-t1x != 0)
			a = (t2y-t1y)/(t2x-t1x);
		b = t1y - a*t1x;
		d = abs(-a*sx+sy-b)/sqrt(a*a+1);

		r = min(r, d);
	}

	cout << setprecision(100) << r << endl;
}