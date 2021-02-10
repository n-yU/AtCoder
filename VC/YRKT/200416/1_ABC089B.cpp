#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N;
	char S;
	bool f = 0;
	cin >> N;

	rep(i,N) {
		cin >> S;
		if(S == 'Y')
			f = 1;
	}

	cout << ((f) ? "Four" : "Three") << endl;
}