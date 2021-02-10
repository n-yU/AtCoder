#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef vector<vector<int>> Graph;

int main() {
	int N,M,A,B;
	cin >> N >> M;
	Graph g(N);
	vector<int> r(N);
	vector<bool> s(N,0);
	queue<int> q;

	rep(i,M) {
		cin >> A >> B;
		--A, --B;
		g.at(A).push_back(B);
		g.at(B).push_back(A);
	}

	q.push(0);
	s.at(0) = 1;
	while(!q.empty()) {
		int n = q.front();
		q.pop();
		
		for(int x : g.at(n))
			if(!s.at(x)) {
				r.at(x) = n+1;
				s.at(x) = 1;
				q.push(x);
			}
	}

	cout << "Yes" << endl;
	rep(i,N-1)
		cout << r.at(i+1) << endl;
}