#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef vector<vector<int>> Graph;
typedef pair<int,bool> P;

int main() {
	int N,M,K,L;
	cin >> N >> M;
	Graph p(N),l(M);
	vector<int> sp(N,0),sl(M,0);
	queue<P> q;
	bool ok = 1;

	rep(i,N) {
		cin >> K;
		rep(j,K) {
			cin >> L;
			p.at(i).push_back(L-1);
			l.at(L-1).push_back(i);
		}
	}

	q.push(P(0,0));
	while(!q.empty()) {
		auto x = q.front();
		q.pop();
		if(x.second == 0) {
			sp.at(x.first) = 1;
			for(auto y : p.at(x.first))
				if(!sl.at(y))
					q.push(P(y,1));
		} else {
			sl.at(x.first) = 1;
			for(auto y : l.at(x.first))
				if(!sp.at(y))
					q.push(P(y,0));
		}
	}

	rep(i,N)
		ok &= sp.at(i);
	
	cout << ((ok) ? "YES" : "NO") << endl;
}