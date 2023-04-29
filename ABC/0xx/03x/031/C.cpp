#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
	int N,tt=-INF;
	cin >> N;
	vector<int> a(N);
	rep(i,N)
		cin >> a.at(i);
	
	rep(i,N) {
		int t, at=-INF, ai;

		rep(j,N) {
			t = -INF;

			if(j < i) {
				rep(k,i-j+1)
					if(k%2) {
						if(t == -INF)
							t = 0;
						t += a.at(k+j);
					}
			} else {
				rep(k,j-i+1)
					if(k%2) {
						if(t == -INF)
							t = 0;
						t += a.at(k+i);
					}
			}
			
			if(t!=INF && t>at)
				at=t, ai=j;
		}

		t = -INF;
		if(ai < i) {
			rep(j,i-ai+1)
				if(j%2 == 0) {
					if(t == -INF)
							t = 0;
					t += a.at(j+ai);
				}
		} else {
			rep(j,ai-i+1)
				if(j%2 == 0) {
					if(t == -INF)
							t = 0;
					t += a.at(j+i);
				}
		}

		if(t != INF)
			tt = max(tt, t);
	}

	cout << tt << endl;
}