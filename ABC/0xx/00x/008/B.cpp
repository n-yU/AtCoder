#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,c=0;
	string S,r;
	map<string,int> m;
	cin >> N;

	rep(i,N) {
		cin >> S;
		if(!m.count(S))
			m[S] = 1;
		else
			++m.at(S);
		if(m.at(S) > c)
			r=S, c=m.at(S);
	}

	cout << r << endl;
}