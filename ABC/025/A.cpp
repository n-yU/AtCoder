#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	int N;
	cin >> S >> N;
	cout << S.at((N-1)/5) << S.at((N-1)%5) << endl;
}