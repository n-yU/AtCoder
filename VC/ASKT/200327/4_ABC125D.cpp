#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
const int INF=1e9+7;

int main() {
	int N,c=0;
	ll m=INF,s=0,A;
	cin >> N;

	rep(i,N) {
		cin >> A;
		if(A < 0)
			++c;
		s += abs(A);
		m = min(m, abs(A));
	}

	cout << s-((c%2)?m*2:0) <<endl;
}