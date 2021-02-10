#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef vector<vector<int>> Graph;

int main() {
	int N,M,A,B;
	cin >> N >> M;
	Graph g(N);

	rep(i,M) {
		cin >> A >> B;
		--A, --B;

		g.at(A).push_back(B);
		g.at(B).push_back(A);
	}

	rep(i,N) {
		set<int> s;

		for(auto x : g.at(i))
			for(auto y : g.at(x))
				s.insert(y);
		for(auto x: g.at(i))
			s.erase(x);
		s.erase(i);
			
		cout << s.size() << endl;
	}
}