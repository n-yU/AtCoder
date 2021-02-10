#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N;
	cin >> N;
	vector<int> A(N),r(N,1);
	rep(i,N)
		cin >> A.at(i);
	
	rep(i,N) {
		int t=i;
		while(A.at(t) != i+1)
			t=A.at(t)-1, ++r.at(i);
	}

	rep(i,N)
		cout << r.at(i) << " ";
	cout << endl;
}