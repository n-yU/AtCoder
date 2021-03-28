#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,t,c=0;
	set<int> NG;
	cin >> N;

	rep(i,3) {
		cin >> t;
		NG.insert(t);
	}

	if(NG.count(N)) {
		cout << "NO" << endl;
		return 0;
	}

	while(N > 0) {
		t = 3;
		while(NG.count(N-t))
			if(--t == 0) {
				cout << "NO" << endl;
				return 0;
			}

		N -= t;
		++c;
	}

	cout << ((c<=100) ? "YES" : "NO") << endl;
}