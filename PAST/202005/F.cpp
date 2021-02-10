#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N;
	string t,r="",rr;
	cin >> N;
	vector<set<char>> a(N);

	rep(i,N) {
		cin >> t;
		rep(j,N)
			a.at(i).insert(t.at(j));
	}

	rep(i,N/2) {
		for(auto x : a.at(i))
			if(!a.at(N-1-i).count(x))
				a.at(i).erase(x);

		if(a.at(i).size() == 0) {
			cout << -1 << endl;
			return 0;
		}
	}

	rep(i,N/2)
		r += *begin(a.at(i));
	rr = r;
	reverse(rr.begin(), rr.end());
	if(N%2)
		r += *begin(a.at(N/2));
	r += rr;
	cout << r << endl;
}