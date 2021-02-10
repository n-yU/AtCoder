#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string T;
	cin >> T;

	rep(i,T.size())
		if(T.at(i) == '?')
			T.at(i) = 'D';
	cout << T << endl;
}