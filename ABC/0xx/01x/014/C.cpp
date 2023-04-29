#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int n,A,B,t=0,r=0;
	cin >> n;
	vector<int> c(1e6+2,0);

	rep(i,n) {
		cin >> A >> B;
		++c.at(A), --c.at(B+1);
	}

	rep(i,1e6+1) {
		t += c.at(i);
		r = max(r,t);
	}

	cout << r << endl;
}