#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string X;
	int n;
	bool ok=1;
	cin >> X;
	n = X.size();

	rep(i,n-n%2-1) {
		string t="";
		t += X.at(i);
		t += X.at(i+1);

		++i;
		if(t=="ch" || t=="ok" || t=="ko" || t=="ou" 
			|| t=="uo" || t=="ku" || t=="uk")
			continue;
		else
			ok = 0;
	}

	if(n%2 && X.at(n-1)!='o' && X.at(n-1)!='k' && X.at(n-1)!='u')
		ok = 0;

	cout << ((ok) ? "YES" : "NO") << endl;
}