#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,M,s;
	char c;
	cin >> N >> M;
	vector<char> t(N,'0');
	string r="";
	set<int> y;

	rep(i,M) {
		cin >> s >> c;
		if(y.count(s) && t.at(s-1)!=c) {
			cout << -1 << endl;
			return 0;
		}
		y.insert(s);
		t.at(s-1) = c;
	}

	rep(i,N)
		r += t.at(i);
	if(r.at(0)=='0') {
		if(N==1) {
			cout << 0 << endl;
			return 0;
		}
		
		if(y.count(1)) {
			cout << -1 << endl;
			return 0;
		} else {
			r.at(0) = '1';
		}
	}

	cout << r << endl;
}