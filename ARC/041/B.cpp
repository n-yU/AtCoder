#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,M;
	cin >> N >> M;
	vector<string> t(N);
	vector<vector<int>> b(N, vector<int>(M,0)), a(N, vector<int>(M,0));

	rep(i,N)
		cin >> t.at(i);
	rep(i,N)
		rep(j,M)
			b.at(i).at(j) = t.at(i).at(j)-'0';
	
	rep(i,N-2)
		rep(j,M-2) {
			a.at(i+1).at(j+1) = min(min(b.at(i).at(j+1), b.at(i+2).at(j+1)), min(b.at(i+1).at(j), b.at(i+1).at(j+2)));
			b.at(i).at(j+1) -= a.at(i+1).at(j+1);
			b.at(i+2).at(j+1) -= a.at(i+1).at(j+1);
			b.at(i+1).at(j) -= a.at(i+1).at(j+1);
			b.at(i+1).at(j+2) -= a.at(i+1).at(j+1);
		}

	rep(i,N) {
		rep(j,M)
			cout << a.at(i).at(j);
		cout << endl;
	}
}