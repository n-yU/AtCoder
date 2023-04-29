#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S,r="AC";
	cin >> S;

	if(S.at(0)!='A' || S.at(1)<'a')
		r = "WA";
	else {
		int c=0;
		rep(i,S.size()-2) {
			if(S.at(i+2) == 'C')
				c++;
			else if(S.at(i+2)<'a')
				r = "WA";
		}
		if(c!=1 || S.at(S.size()-1)<'a')
			r = "WA";
	}

	cout << r << endl;
}