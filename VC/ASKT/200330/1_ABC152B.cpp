#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int a,b;
	cin >> a >> b;
	
	if(a > b)
		rep(i,a)
			cout << b;
	else
		rep(i,b)
			cout << a;
	cout << endl;
}