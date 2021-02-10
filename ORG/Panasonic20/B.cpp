#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll H,W,r=0;
	cin >> H >> W;

	if(H==1 || W==1)
		r = 1;
	else
		r = H*(W/2) + (H/2ll+H%2)*(W%2);
	cout << r << endl;
}