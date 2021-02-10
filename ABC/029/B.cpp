#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int c = 0;

	rep(i,12) {
		string S;
		cin >> S;
		rep(j,S.size())
			if(S.at(j) == 'r') {
				++c;
				break;
			}
	}

	cout << c << endl;
}