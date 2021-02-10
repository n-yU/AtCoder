#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S,T;
	bool ok=0;
	cin >> S >> T;
	S += S;
	
	rep(i,S.size())
		if(S.substr(i,T.size()) == T)
			ok = 1;

	if(ok)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
}