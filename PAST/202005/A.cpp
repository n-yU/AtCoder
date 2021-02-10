#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string s,t;
	cin >> s >> t;

	if(s == t)
		cout << "same";
	else {
		rep(i,3) {
			if(s.at(i) >= 'a')
				s.at(i) -= 32;
			if(t.at(i) >= 'a')
				t.at(i) -= 32;	
		}
		if(s == t)
			cout << "case-insensitive";
		else
			cout << "different";
	}
	
	cout << endl;
}