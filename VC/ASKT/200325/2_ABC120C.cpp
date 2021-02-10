#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S;
	int c0=0, c1=0;
	cin >> S;

	rep(i,S.size())
		if(S.at(i) == '0')
			++c0;
		else
			++c1;
	
	cout << min(c0,c1)*2 << endl;
}