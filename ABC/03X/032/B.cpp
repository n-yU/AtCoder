#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string s;
	int k;
	set<string> r;
	cin >> s >> k;

	if(k > s.size()) {
		cout << 0 << endl;
		return 0;
	}
	
	rep(i,s.size()-k+1)
		r.insert(s.substr(i,k));

	cout << r.size() << endl;
}