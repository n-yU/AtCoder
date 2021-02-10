#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N;
	string S;
	set<string> r;

	cin >> N;
	rep(i,N) {
		cin >> S;
		r.insert(S);
	}

	cout << r.size() << endl;
}