#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,M,A,B,r=0;
	cin >> N >> M;
	vector<int> H(N);
	vector<set<int>> p(N);

	rep(i,N)
		cin >> H.at(i);
	rep(i,M) {
		cin >> A >> B;
		--A, --B;
		p.at(A).insert(B);
		p.at(B).insert(A);
	}

	rep(i,N) {
		bool ok = 1;
		for(int x : p.at(i))
			if(H.at(i) <= H.at(x)) {
				ok = 0;
				break;
			}

		if(ok)
			++r;
	}

	cout << r << endl;
}