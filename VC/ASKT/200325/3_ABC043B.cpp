#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string s,r="";
	int p=0;
	cin >> s;

	rep(i,s.size()) {
		r += ".";
		if(s.at(i) != 'B')
			r.at(p++) = s.at(i);
		else
			p = max(p-1,0);
	}

	cout << r.substr(0,p) << endl;
}