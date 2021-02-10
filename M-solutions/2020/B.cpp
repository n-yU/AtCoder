#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B,C,K;
	cin >> A >> B >> C >> K;

	while(K--)
		if(B <= A)
			B *= 2;
		else if(C <= B)
			C *= 2;

	if(A<B && B<C)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
}