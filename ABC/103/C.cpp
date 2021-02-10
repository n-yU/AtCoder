#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,r=0,a;
	cin >> N;

	rep(i,N) {
		cin >> a;
		r += a-1;
	}

	cout << r << endl;
}