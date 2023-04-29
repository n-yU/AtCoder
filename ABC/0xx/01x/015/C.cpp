#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,K;
	bool ok = 1;
	cin >> N >> K;
	vector<vector<int>> T(N, vector<int>(K));

	rep(i,N)
		rep(j,K)
			cin >> T.at(i).at(j);
	
	rep(i,pow(N,K)) {
		vector<int> ix(N);
		int t=0,x=i;

		rep(j,N) {
			t ^= T.at(j).at(x%K);
			x /= K;
		}

		if(t == 0) {
			ok = 0;
			break;
		}
	}

	cout << ((ok) ? "Nothing" : "Found") << endl;
}