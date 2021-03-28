#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF = 1e9+7;

int main() {
	int N,T,A,m=INF,d=0,r=1;
	cin >> N >> T;

	rep(i,N) {
		cin >> A;
		m = min(m, A);
		if(d == 0)
			d = max(A-m, 0);
		else if(max(A-m,0) == d)
			r++;
		else
			d = max(d, max(A-m, 0));
	}

	cout << r << endl;
}