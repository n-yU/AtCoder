#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B,C,D,c1,c2;
	cin >> A >> B >> C >> D;

	c1 = A/D+((A%D)?1:0);
	c2 = C/B+((C%B)?1:0);

	if(c1 >= c2)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
}