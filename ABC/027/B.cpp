#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,s=0,r=0,t=0,c=0;
	cin >> N;
	vector<int> a(N);

	rep(i,N) {
		cin >> a.at(i);
		s += a.at(i);
	}

	if(s%N) {
		cout << -1;
	} else {
		rep(i,N) {
			t += a.at(i);
			if(t%(c+1)==0 && t==s/N*(c+1)) {
				r += c;
				t=0, c=0;
			} else {
				++c;
			}
		}
		cout << r;
	}
	cout << endl;
}