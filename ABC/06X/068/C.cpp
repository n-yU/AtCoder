#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef pair<int,int> P;

int main() {
	int N,M;
	cin >> N >> M;
	vector<P> t(M);
	set<int> s;

	rep(i,M)
		cin >> t.at(i).first >> t.at(i).second;
	sort(t.begin(), t.end());

	rep(i,M) {
		if(t.at(i).first == 1)
			s.insert(t.at(i).second);
		if(t.at(i).second==N && s.count(t.at(i).first)) {
			cout << "POSSIBLE" << endl;
			return 0;
		}
	}

	cout << "IMPOSSIBLE" << endl;
}