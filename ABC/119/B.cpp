#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N;
	double x,r=0;
	string u;
	cin >> N;

	rep(i,N) {
		cin >> x >> u;
		if(u == "JPY")
			r += x;
		else
			r += x * 380000;
	}

	cout << r << endl;
}