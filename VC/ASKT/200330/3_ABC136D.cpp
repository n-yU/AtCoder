#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S;
	char p;
	int t,rc=0,lc=1,n;
	cin >> S;
	n = S.size();
	vector<int> r(n);
	
	S += 'R';
	p = 'R';
	rep(i,n+1) {
		if(S.at(i) != p) {
			if(S.at(i) == 'L') {
				t = i;
			} else {
				int m = (rc+lc)/2;
				if(rc%2 == lc%2) {
					r.at(t-1) = m;
					r.at(t) = m;
				} else {
					r.at(t-1) = m+(rc%2);
					r.at(t) = m+(lc%2);
				}
				rc=1, lc=1;
			}
		} else {
			if(S.at(i) == 'R')
				++rc;
			else
				++lc;
		}
		p = S.at(i);
	}

	rep(i,n)
		cout << r.at(i) << " ";
	cout << endl;
}