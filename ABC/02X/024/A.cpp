#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B,C,K,S,T,r;
	cin >> A >> B >> C >> K >> S >> T;

	r = S*A+T*B;
	if(S+T >= K)
		r -= C*(S+T);
	cout << r << endl;
}