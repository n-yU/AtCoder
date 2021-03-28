#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)

int main() {
	int N,M,r=0;
	string s;
	map<string,int> c;

	cin >> N;
	rep(i,N) {
		cin >> s;
		if(c.count(s))
			++c.at(s);
		else
			c[s] = 1;
	}

	cin >> M;
	rep(i,M) {
		cin >> s;
		if(c.count(s))
			--c.at(s);
	}

	for(auto p : c)
		r = max(r, p.second);

	cout << r << endl;
}