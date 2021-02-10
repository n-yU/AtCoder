#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int N;
vector<string> S;

void dfs(int p, int q) {
	S.at(p).at(q) = 'X';
	if(p-1 >= 0) {
		if(S.at(p-1).at(q) == '#')
			dfs(p-1, q);
		if(q-1>=0 && S.at(p-1).at(q-1)=='#')
			dfs(p-1, q-1);
		if(q+1<N*2-1 && S.at(p-1).at(q+1)=='#')
			dfs(p-1, q+1);
	}
}

int main() {
	cin >> N;
	S.resize(N);

	rep(i,N)
		cin >> S.at(i);

	rep(i,N)
		rep(j,N*2-1)
			if(S.at(i).at(j) == 'X')
				dfs(i,j);
	
	rep(i,N)
		cout << S.at(i) << endl;
}