#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,m=1000;
	cin >> N;
	vector<int> A(N);
	rep(i,N)
		cin >> A.at(i);

	rep(i,N-1)
		m += (m/A.at(i))*max(A.at(i+1)-A.at(i), 0);

	cout << m << endl;
}