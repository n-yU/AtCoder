#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int N;
vector<string> r;

void dfs(string s) {
	if(s.size() == N)
		r.push_back(s);
	else {
		dfs(s+"a");
		dfs(s+"b");
		dfs(s+"c");
	}
}

int main() {
	cin >> N;
	dfs("");
	sort(r.begin(), r.end());

	rep(i,r.size())
		cout << r.at(i) << endl;
}