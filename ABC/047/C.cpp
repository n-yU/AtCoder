#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int c=0;
	string S;
	char p;
	cin >> S;

	p = S.at(0);
	rep(i,S.size()-1) {
		if(S.at(i+1) != p)
			c++;
		p = S.at(i+1);
	}

	cout << c << endl;
}