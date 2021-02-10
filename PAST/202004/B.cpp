#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S;
	map<char,int> r;
	int t=0;
	char x;
	r['a']=0, r['b']=0, r['c']=0;

	cin >> S;
	rep(i,S.size())
		++r.at(S.at(i));

	for(auto p : r)
		if(p.second > t) {
			x = p.first;
			t = p.second;
		}
	cout << x << endl;
}