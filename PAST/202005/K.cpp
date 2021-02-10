#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,Q;
	cin >> N >> Q;
	vector<int> a(N,-1),b(N),r(N);

	rep(i,N)
		b.at(i) = i;

	rep(i,Q) {
		int f,t,x,y,z;
		cin >> f >> t >> x;
		--f, --t, --x;

		y=b.at(f), z=b.at(t);
		b.at(f) = a.at(x);
		b.at(t) = y;
		a.at(x) = z;
	}

	rep(i,N) {
		int t = b.at(i);
		while(t != -1) {
			r.at(t) = i+1;
			t = a.at(t);
		}
	}

	rep(i,N)
		cout << r.at(i) << endl;
}