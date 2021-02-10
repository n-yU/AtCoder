#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,K;
	double t,mE;
	cin >> N >> K;
	vector<double> p(N);

	rep(i,N) {
		cin >> t;
		p.at(i) += t*(t+1)/(2*t);
	}

	t = 0;
	rep(i,K)
		t += p.at(i);
	mE = t;
	
	rep(i,N-K) {
		t = t-p.at(i)+p.at(i+K);
		mE = max(mE, t);
	}

	cout << setprecision(30) << mE << endl;
}