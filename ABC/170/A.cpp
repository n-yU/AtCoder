#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int x,r;

	rep(i,5) {
		cin >> x;
		if(!x)
			r = i+1;
	}

	cout << r << endl;
}