#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,M,c=0;
	cin >> N >> M;
	vector<int> x(N,2);
	vector<int> y(M,1);

	rep(i,M)
		x.push_back(y.at(i));

	rep(i,N+M)
		for(int j=i+1; j<N+M; ++j)
			if((x.at(i)+x.at(j))%2 == 0)
				++c;
	cout << c << endl;
}