#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N;
	bool ok=0;
	cin >> N;

	rep(i,30)
		rep(j,30)
			if(i*4+j*7 == N)
				ok = 1;

	if(ok)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
}