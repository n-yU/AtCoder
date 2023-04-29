#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string w;
	bool ok=1;
	cin >> w;
	map<char,int> m;

	rep(i,w.size())
		if(m.count(w.at(i)))
			++m.at(w.at(i));
		else
			m[w.at(i)] = 1;

	for(auto p : m)
		if(p.second%2)
			ok = 0;

	cout <<((ok) ? "Yes" : "No") << endl;
}