#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,M,K,r,c=0;
	cin >> N >> M >> K;
	r = M;

	vector<ll> A(N+1,0),B(M+1,0);
	rep(i,N) {
		cin >> A.at(i+1);
		A.at(i+1) += A.at(i);
	}
	rep(i,M) {
		cin >> B.at(i+1);
		B.at(i+1) += B.at(i);
	}

	rep(i,N+1) {
		if(A.at(i) > K)
			break;
		for(int j=r; j>=0; --j)
			if(B.at(j) <= K-A.at(i)) {
				r = j;
				break;
			}
		c = max(c, i+r);
	}
	
	cout << c << endl;
}