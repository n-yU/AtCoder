#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S;
	char p,pp;
	cin >> S;

	pp=S.at(0), p=S.at(1);
	if(S.size()==2 && pp==p) {
		cout << "1 2" << endl;
		return 0;
	}

	rep(i,S.size()-2) {
		if(S.at(i+2) == p) {
			cout << i+2 << " " << i+3 << endl;
			return 0;
		}
		if(S.at(i+2) == pp) {
			cout << i+1 << " " << i+3 << endl;
			return 0;
		}
		pp=p, p=S.at(i+2);
	}

	cout << "-1 -1" << endl;
}