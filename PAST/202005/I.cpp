#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	int N,Q;
	bool t=0;
	cin >> N >> Q;

	vector<ll> r(N),c(N);
	rep(i,N) {
		r.at(i) = i;
		c.at(i) = i;
	}

	rep(i,Q) {
		int q,a,b;
		cin >> q;

		if(q != 3) {
			cin >> a >> b;
			--a, --b;
		}

		if(q == 1) {
			if(t)
				swap(c.at(a), c.at(b));
			else
				swap(r.at(a), r.at(b));
		} else if(q == 2) {
			if(t)
				swap(r.at(a), r.at(b));
			else
				swap(c.at(a), c.at(b));
		} else if(q == 3) {
			t = (t ? 0 : 1);
		} else {
			if(t)
				cout << N*r.at(b)+c.at(a);
			else
				cout << N*r.at(a)+c.at(b);
			cout << endl;
		}
	}
}