#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,s=0,r;
	cin >> N;

	rep(i,9)
		rep(j,9)
			s += (i+1)*(j+1);
	r = s-N;

	rep(i,9)
		if(r%(i+1)==0 && r/(i+1)<10)
			cout << i+1 << " x " << r/(i+1) << endl;
}