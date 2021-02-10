#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,c=0,r=0;
	string S;
	cin >> N >> S;

	rep(i,S.size())
		if(S.at(i)=='I')
			r = max(r, ++c);
		else
			--c;
	cout << r << endl;
}