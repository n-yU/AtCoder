#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string s,r;
	char p = -1;
	int c = 1;
	cin >> s;
	
	p = s.at(0);
	rep(i,s.size()-1) {
		if(p == s.at(i+1))
			++c;
		else {
			r += p+to_string(c);
			c = 1;
		}
		p = s.at(i+1);
	}
	
	if(c > 0)
		r += p+to_string(c);

	cout << r << endl;
}