#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S,T;
	int c = 0;
	cin >> S >> T;

	rep(i,S.size())
		c += (S.at(i) != T.at(i));
	cout << c << endl;
}