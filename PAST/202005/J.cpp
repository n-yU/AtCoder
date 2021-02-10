#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,M,a;
	cin >> N >> M;
	vector<int> c(N,0);
	
	rep(i,M) {
		cin >> a;
		int x = lower_bound(c.begin(), c.end(), a)-c.begin();
		if(--x < 0)
			cout << -1;
		else {
			c.at(x) = a;
			cout << N-x;
		}
		cout << endl;
	}
}