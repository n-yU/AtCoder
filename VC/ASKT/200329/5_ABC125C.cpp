#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int gcd(int x, int y) {
	if(x < y)
		swap(x, y);
	if(y == 0)
		return x;

	while(x%y != 0) {
		int t = x;
		x = y;
		y = t%y;
	}

	return y;
}

int main() {
	int N,r=0;
	cin >> N;
	vector<int> A(N),g1(N+1,0),g2(N+1,0);

	rep(i,N)
		cin >> A.at(i);
	
	rep(i,N) {
		g1.at(i+1) = gcd(g1.at(i), A.at(i));
		g2.at(N-1-i) = gcd(g2.at(N-i), A.at(N-1-i));
	}

	rep(i,N)
		r = max(r, gcd(g1.at(i), g2.at(i+1)));
	
	cout << r << endl;
}