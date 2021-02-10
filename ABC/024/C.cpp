#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,D,K;
	cin >> N >> D >> K;
	vector<int> L(D),R(D);

	rep(i,D)	
		cin >> L.at(i) >> R.at(i);

	rep(i,K) {
		int S,T,r=-1;
		cin >> S >> T;

		rep(j,D) {
			if(S == T) {
				r = j;
				break;
			} else if(S > T) {
				if(S>=L.at(j) && S<=R.at(j))
					S = max(T, L.at(j));
			} else {
				if(S>=L.at(j) && S<=R.at(j))
					S = min(T, R.at(j));
			}
		}

		if(r == -1)
			r = D;
		cout << r << endl;
	}
}