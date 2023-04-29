#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,T,r=0,p=0;
	cin >> N >> T;

	rep(i,N) {
		int A;
		cin >> A;

		if(A < p)
			r -= p-A;
		r += T;
		p = A+T;
	}

	cout << r << endl;
}