#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S;
	cin >> S;

	if(S.at(0) >= 'a')
		S.at(0) = toupper(S.at(0));

	rep(i,S.size()-1) {
		if(S.at(i+1) <= 'Z')
			S.at(i+1) = tolower(S.at(i+1));
	}

	cout << S << endl;
}