#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main() {
	int sx,sy,tx,ty,dx,dy;
	cin >> sx >> sy >> tx >> ty;

	dx = tx-sx;
	dy = ty-sy;

	rep(i,dy)
		cout << 'U';
	rep(i,dx)
		cout << 'R';
	rep(i,dy)
		cout << 'D';
	rep(i,dx)
		cout << 'L';

	cout << 'L';
	rep(i,dy+1)
		cout << 'U';
	rep(i,dx+1)
		cout << 'R';
	cout << 'D';

	cout << 'R';
	rep(i,dy+1)
		cout << 'D';
	rep(i,dx+1)
		cout << 'L';
	cout << "U" << endl;
}