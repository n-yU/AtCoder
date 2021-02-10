#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	string S = "";
	cin >> N;

	if(N==0)
		S += '0';

	while(N != 0) {
		if(N%(-2) == 0) {
			S += '0';
			N /= -2;
		} else {
			S += '1';
			if(N > 0)
				N /= -2;
			else
				N = N/(-2)+1;
		}
	}

	reverse(S.begin(), S.end());
	cout << S << endl;
}