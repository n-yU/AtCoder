#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,M,Q;
	cin >> N >> M >> Q;
	vector<int> p(M,N);
	vector<set<int>> u(N);

	rep(i,Q) {
		int q,n,m;
		cin >> q >> n;

		if(q == 1) {
			int r=0;
			for(auto x : u.at(n-1))
				r += p.at(x);
			cout << r << endl;
		} else {
			cin >> m;
			u.at(n-1).insert(m-1);
			--p.at(m-1);
		}
	}
}