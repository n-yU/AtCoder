#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int K;
	string S;
	cin >> K >> S;

	if(S.size() <= K)
		cout << S;
	else
		cout << S.substr(0,K) << "...";
	cout << endl;
}