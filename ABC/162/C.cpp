#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int K,s=0;
	cin >> K;
	vector<vector<int>> g(K, vector<int>(K));

	rep(i,K)
		rep(j,K)
			g.at(i).at(j) = gcd(i+1, j+1);
		
	rep(i,K)
		rep(j,K)
			rep(k,K)
				s += g.at(g.at(i).at(j)-1).at(k);

	cout << s << endl;
}