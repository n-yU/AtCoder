#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,M,c=0;
	map<string,int> s;
	string t;

	cin >> N;
	rep(i,N) {
		cin >> t;
		if(s.count(t))
			++s.at(t);
		else
			s[t] = 1;
	}

	cin >> M;
	rep(i,M) {
		cin >> t;
		if(s.count(t))
			--s.at(t);
	}

	for(auto p : s)
		c = max(c, p.second);
	cout << c << endl;
}