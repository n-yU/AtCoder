#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,s,r=0;
	cin >> N;

	rep(i,N) {
		int d;
		cout << "? " << 1 << " " << i+1 << endl;
		cin >> d;

		if(d > r)
			s = i+1;
		r = max(r, d);
	}

	r = 0;
	rep(i,N) {
		int d;
		cout << "? " << s << " " << i+1 << endl;
		cin >> d;
		r = max(r, d);
	}

	cout << "! " << r << endl;
}