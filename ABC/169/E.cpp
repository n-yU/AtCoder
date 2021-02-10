#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N;
	cin >> N;
	vector<int> A(N),B(N);

	rep(i,N)
		cin >> A.at(i) >> B.at(i);
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	
	if(N%2)
		cout << B.at(N/2)-A.at(N/2)+1;
	else
		cout << B.at(N/2)+B.at(N/2-1)-A.at(N/2)-A.at(N/2-1)+1;
	cout << endl;
}