#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int W,H,N,x,y,a,bx1,bx2,by1,by2;
	cin >> W >> H >> N;

	bx1=W, bx2=0; by1=H, by2=0;

	rep(i,N) {
		cin >> x >> y >> a;
		if(a == 1)
			bx2 = max(bx2, x);
		else if(a == 2)
			bx1 = min(bx1, x);
		else if(a == 3)
			by2 = max(by2, y);
		else
			by1 = min(by1, y);
	}

	int dx=bx1-bx2, dy=by1-by2;
	dx = max(dx, 0);
	dy = max(dy, 0);

	cout << dx * dy << endl;
}