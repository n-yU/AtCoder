#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,c=0,t=1;
	cin >> N;

	while(N >= t) {
		t *= 2;
		c++;
	}

	cout << pow(2,c-1) << endl;
}