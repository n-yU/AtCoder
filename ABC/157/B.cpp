#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,b;
	vector<vector<int>> A(3, vector<int>(3));
	vector<vector<bool>> c(3, vector<bool>(3,0));
	bool ok = 0;

	rep(i,3)
		rep(j,3)
			cin >> A.at(i).at(j);

	cin >> N;

	rep(i,N) {
		cin >> b;
		rep(j,3)
			rep(k,3)
				if(A.at(j).at(k) == b)
					c.at(j).at(k) = 1;
	}

	rep(i,3)
		if(c.at(i).at(0) && c.at(i).at(1) && c.at(i).at(2))
			ok = 1;

	rep(i,3)
		if(c.at(0).at(i) && c.at(1).at(i) && c.at(2).at(i))
			ok = 1;

	if(c.at(0).at(0) && c.at(1).at(1) && c.at(2).at(2))
		ok = 1;
	if(c.at(2).at(0) && c.at(1).at(1) && c.at(0).at(2))
		ok = 1;

	if(ok)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
}