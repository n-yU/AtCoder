#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,r=0;
	cin >> N;

	rep(i,to_string(N).size()) {
		int t = N/(int)pow(10,i+1)*pow(10,i);
		if(N%(int)pow(10,i+1) >= pow(10,i))
			t += min(pow(10,i), N%(int)pow(10,i+1)-pow(10,i)+1);
		r += t;
	}

	cout << r << endl;
}