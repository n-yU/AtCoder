#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,A,B,r=0;
	cin >> N >>  A >> B;

	rep(i,N) {
		string s;
		int d;
		cin >> s >> d;

		if(s == "East")
			r += max(A, min(B, d));
		else
			r -= max(A, min(B, d));
	}

	if(r > 0)
		cout << "East " << r;
	else if(r < 0)
		cout << "West " << -r;
	else
		cout << 0;
	cout << endl;
}