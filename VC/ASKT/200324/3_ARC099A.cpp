#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,K,p;
	cin >> N >> K;
	cout << 1+(N-K)/(K-1)+((N-K)%(K-1)!=0) << endl;
}