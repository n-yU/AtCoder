#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string s,p;
	cin >> s;
	p = s.at(0);

	rep(i,s.size()-1) {
		if(s.at(i+1) != p.at(0)) {
			cout << p.at(0) << p.size();
			p = s.at(i+1);
		} else
			p += s.at(i+1);
	}
	cout << p.at(0) << p.size() << endl;
}