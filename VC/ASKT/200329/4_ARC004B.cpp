#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,d,s=0,m=0;
	cin >> N;

	rep(i,N) {
		cin >> d;
		s += d;
		m = max(m, d);
	}

	cout << s << " " << max(m*2-s,0) << endl;
}