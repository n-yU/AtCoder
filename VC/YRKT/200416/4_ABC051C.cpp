#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int sx,sy,tx,ty;
	string r="";
	cin >> sx >> sy >> tx >> ty;

	rep(i,ty-sy)
		r += 'U';
	rep(i,tx-sx)
		r += 'R';
	rep(i,ty-sy)
		r += 'D';
	rep(i,tx-sx+1)
		r += 'L';
	rep(i,ty-sy+1)
		r += 'U';
	rep(i,tx-sx+1)
		r += 'R';
	r += "DR";
	rep(i,ty-sy+1)
		r += 'D';
	rep(i,tx-sx+1)
		r += 'L';
	
	cout << r + 'U' << endl;
}