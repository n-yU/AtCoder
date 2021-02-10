#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,A,s=0,c=0;
	cin >> N;

	rep(i,N) {
		cin >> A;
		s += A;
		c += (A>0);
	}

	cout << s/c+(s%c!=0) << endl;
}