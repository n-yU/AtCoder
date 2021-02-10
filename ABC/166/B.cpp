#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,K,r=0;
	cin >> N >> K;
	vector<vector<int>> snk(N);

	rep(i,K) {
		int d,A;
		cin >> d;

		rep(j,d) {
			cin >> A;
			snk.at(--A).push_back(i);
		}
	}

	rep(i,N)
		if(snk.at(i).size() == 0)
			++r;
	cout << r << endl;
}