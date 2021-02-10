#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,M,X,Y,r=0,pa=0,pb=0,t=0;
	cin >> N >> M >> X >> Y;
	vector<int> a(N),b(M);
	rep(i,N)
		cin >> a.at(i);
	rep(i,M)
		cin >> b.at(i);
	
	while(1) {
		while(a.at(pa) < t)
			if(++pa == N)
				goto end;
		t = a.at(pa)+X;

		while(b.at(pb) < t)
			if(++pb == M)
				goto end;
		t = b.at(pb)+Y;
		++r;
	}

end:
	cout << r << endl;
}