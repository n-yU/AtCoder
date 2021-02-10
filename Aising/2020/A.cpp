#include <bits/stdc++.h>
using namespace std;

int main() {
	int L,R,d,c=0;
	cin >> L >> R >> d;

	for(int i=L; i<=R; ++i)
		if(i%d == 0)
			++c;
	cout << c << endl;
}