#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int N;
	cin >> N;
	vector<P> b(N);
	map<P,int> m;
	set<P> s;
	vector<vector<int>> g(N);

	rep(i,N) {
		cin >> b.at(i).first >> b.at(i).second;
		s.insert(b.at(i));
	}
	
	rep(i,N)
		rep(j,N) {
			if(i == j)
				continue;
			P p = P(b.at(i).first-b.at(j).first, b.at(i).second-b.at(j).second);
			if(m.count(p))
				++m.at(p);
			else
				m[p] = 1;
		}

	P q;
	for(auto x : m)
		q = x.first;
	
	rep(i,N) {
		P x = P(b.at(i).first-q.first, b.at(i).second-q.second);
		if(s.count(q)) {
		}
	}
}