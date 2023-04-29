#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int A,B;
	cin >> A >> B;

	rep(i,100000)
		if((int)((i+1)*0.08)==A && (int)((i+1)*0.1)==B) {
			cout << i+1 << endl;
			return 0;
		}

	cout << -1 << endl;
}