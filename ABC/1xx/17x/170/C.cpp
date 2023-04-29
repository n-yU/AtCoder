#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int X,N,r,y=0;
	cin >> X >> N;
	set<int> p;
	r = X;

	rep(i,N) {
		int t;
		cin >> t;
		p.insert(t);
	}

	while(1) {
		if(!p.count(X-y)) {
			r = X-y;
			break;
		}
		if(!p.count(X+y)) {
			r = X+y;
			break;
		}
		++y;
	}

	cout << r << endl;
}