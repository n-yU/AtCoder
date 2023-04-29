#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll a,b,x;
	cin >> a >> b >> x;

	if(a != 0)
		a = (a-1)/x+1;
	b = b/x+1;
	cout << b-a << endl;
}