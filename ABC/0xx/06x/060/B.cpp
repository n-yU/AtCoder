#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int A,B,C;
	cin >> A >> B >> C;

	rep(i,100)
		if(A*(i+1)%B == C) {
			cout << "YES" << endl;
			return 0;
		}

	cout << "NO" << endl;
}