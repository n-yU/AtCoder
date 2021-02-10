#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef pair<int,int> P;
typedef vector<vector<int>> Graph;

int main() {
	int N,M,a,b,r=0;
	cin >> N >> M;
	Graph g(N);
	vector<P> p(M);

	rep(i,M) {
		cin >> a >> b;
		--a, --b;
		g.at(a).push_back(b);
		g.at(b).push_back(a);
		p.at(i) = P(a,b);
	}

	rep(i,M) {
		int c=0;
		vector<bool> s(N,0);
		queue<int> q;
		q.push(0);

		while(!q.empty()) {
			int x = q.front();
			q.pop();
			s.at(x)=1;

			for(auto nx : g.at(x)) {
				if((x==p.at(i).first && nx==p.at(i).second) || (nx==p.at(i).first && x==p.at(i).second) || s.at(nx))
					continue;
				q.push(nx);
			}
		}

		rep(j,N)
			if(s.at(j))
				++c;
		if(c != N)
			++r;
	}

	cout << r << endl;
}