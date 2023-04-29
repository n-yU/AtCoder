#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,Q;
	string S;
	vector<set<int>> m(26);

	cin >> N >> S >> Q;
	rep(i,N)
		m.at(S.at(i)-'a').insert(i+1);

	rep(q,Q) {
		int t,i;
		cin >> t >> i;

		if(t == 1) {
			char c;
			cin >> c;
			
			m[S.at(i-1)-'a'].erase(i);
			m[c-'a'].insert(i);
			S.at(i-1) = c;
		} else {
			int r,c=0;
			cin >> r;

			rep(j,26) {
				auto itr_l = m.at(j).lower_bound(i);
				if(itr_l != m.at(j).end()) {
					auto itr_r = m.at(j).upper_bound(r);
					c += (itr_l != itr_r);
				}
			}
			cout << c << endl;
		}
	}
}