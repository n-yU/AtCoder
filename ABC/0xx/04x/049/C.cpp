#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

vector<string> k = {"dreamer", "dream", "eraser", "erase"};

int main() {
	int p=0;
	string S;
	cin >> S;

	reverse(S.begin(), S.end());
	rep(i,4)
		reverse(k.at(i).begin(), k.at(i).end());

	while(p < S.size()) {
		bool ok = 0;

		rep(i,4)
			if(S.substr(p, min(S.size()-p, k.at(i).size())) == k.at(i)) {
				p += k.at(i).size();
				ok = 1;
			}

		if(!ok) {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
}