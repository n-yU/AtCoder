#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S;
	cin >> S;
	set<string> r;

	rep(i,S.size())
		rep(j,min(3,(int)S.size()-i))
			r.insert(S.substr(i,j+1));
	
	for(auto x : r)
		rep(i,1<<x.size()) {
			string t = x;
			rep(j,x.size())
				if(i & 1<<j)
					t.at(j) = '.';
			r.insert(t);
		}

	cout << r.size() << endl;
}