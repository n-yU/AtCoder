#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,K;
	double eps=1e-10, OK=-eps, NG=100+eps;
	cin >> N >> K;
	vector<int> w(N),p(N);

	rep(i,N)
		cin >> w.at(i) >> p.at(i);
	
	while(NG-OK > 1e-11) {
		double m=(OK+NG)/2, s=0;
		vector<double> t(N);

		if(m < 0) {
			OK = 0;
			break;
		} else if(m > 100) {
			OK = 100;
			break;
		}

		rep(j,N)
			t.at(j) = w.at(j)*((p.at(j)-m)/100);
		sort(t.begin(), t.end(), greater<double>());

		rep(j,K)
			s += t.at(j);
		if(s < (double)0)
			NG = m;
		else
			OK = m;
	}

	cout << setprecision(10) << OK << endl;
}