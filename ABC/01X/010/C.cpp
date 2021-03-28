#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int n;
	double txa,tya,txb,tyb,T,V;
	cin >> txa >> tya >> txb >> tyb >> T >> V >> n;

	rep(i,n) {
		double x,y,d;
		cin >> x >> y;
		
		d = sqrt((txa-x)*(txa-x) + (tya-y)*(tya-y));
		d += sqrt((txb-x)*(txb-x) + (tyb-y)*(tyb-y));

		if(d <= T*V) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
}