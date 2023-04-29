#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
const int INF=1e9+7;

int main() {
	string S;
	char ps='+';
	int r=0;
	ll pn=0;
	cin >> S;
	
	rep(i,S.size()) {
		char c = S.at(i);
		if(c>='0' && c<='9') {
			if(ps == '+') {
				if(pn > 0) {
					++r;
					pn = 0;
				}
				pn += c-'0';
			} else {
				pn *= c-'0';
				if(pn > INF) {
					pn %= INF;
					pn = 1;
				}
			}
		} else {
			ps = c;
		}
	}

	if(pn > 0)
		++r;

	cout << r << endl;
}