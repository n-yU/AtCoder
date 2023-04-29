#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,X,Y;
	cin >> N >> X >> Y;
	vector<int> r(N-1,0);

	rep(i,N)
		for(int j=i+1; j<N; ++j)
			++r.at(min(j-i, abs(X-1-i)+abs(Y-1-j)+1)-1);

	rep(i,N-1)
		cout << r.at(i) << endl;
}