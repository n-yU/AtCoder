#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main() {
	int K,S,r=0;
	cin >> K >> S;

	rep(i,min(K+1, S+1))
		rep(j,min(K+1, S+1-i))
			if(S-i-j <= K)
					r++;
	
	cout << r << endl;
}