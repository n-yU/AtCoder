#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,r=0,m=0;
	cin >> N;
	vector<int> A(N);
	set<int> s,d;

	rep(i,N) {
		cin >> A.at(i);
		m = max(m, A.at(i));

		if(!d.count(A.at(i)) && !s.count(A.at(i)))
			s.insert(A.at(i));
		else
			d.insert(A.at(i));
	}

	vector<bool> dp(m+1,1);
	for(auto x : s) {
		if(!dp.at(x))
			continue;
		
		int t = x;
		while(t+x <= m) {
			t += x;
			dp.at(t) = 0;
		}
	}

	rep(i,N)
		if(!d.count(A.at(i)))
			r += dp.at(A.at(i));
	cout << r << endl;
}