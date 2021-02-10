#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,r=0;
	cin >> N;
	vector<int> A1(N),A2(N);
	
	rep(i,N) {
		cin >> A1.at(i);
		if(i != 0)
			A1.at(i) += A1.at(i-1);
	}
	rep(i,N)
		cin >> A2.at(i);
	rep(i,N-1)
		A2.at(N-2-i) += A2.at(N-1-i);
	
	rep(i,N)
		r = max(r, A1.at(i)+A2.at(i));
	
	cout << r << endl;
}