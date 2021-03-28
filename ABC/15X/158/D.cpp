#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S,f="",l="";
	int Q,T,F,x = 0;
	char C;

	cin >> S >> Q;
	rep(i,Q) {
		cin >> T;
		if(T == 1)
			x++;
		else {
			cin >> F >> C;
			if((x+F)%2)
				f += C;
			else
				l += C;
		}
	}

	reverse(f.begin(), f.end());
	f += S+l;
	if(x%2)
		reverse(f.begin(), f.end());
	cout << f << endl;
}