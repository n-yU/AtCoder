#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll A,V,B,W,T,x,y;
	cin >> A >> V >> B >> W >> T;

	x = abs(A-B);
	y = (V-W)*T;
	
	cout << ((x <= y) ? "YES" : "NO") << endl;
}