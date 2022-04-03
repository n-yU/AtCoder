#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll A,B,M,r,x,y,c;
	cin >> A >> B >> M;
	vector<ll> a(A), b(B), ta(A), tb(B);

	rep(i,A) {
		cin >> a.at(i);
		ta.at(i) = a.at(i);
	}
	rep(i,B) {
		cin >> b.at(i);
		tb.at(i) = b.at(i);
	}

	sort(ta.begin(), ta.end());
	sort(tb.begin(), tb.end());
	r = ta.at(0)+tb.at(0);

	rep(i,M) {
		cin >> x >> y >> c;
		--x, --y;
		r = min(r, a.at(x)+b.at(y)-c);
	}

	cout << r << endl;
}