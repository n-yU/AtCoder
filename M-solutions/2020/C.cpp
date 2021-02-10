#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,K;
	cin >> N >> K;
	vector<int> A(N);
	rep(i,N)
		cin >> A.at(i);
	
	rep(i,N-K)
		cout << ((A.at(i)<A.at(i+K)) ? "Yes" : "No") << endl;
}