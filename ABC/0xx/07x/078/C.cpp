#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,M;
	cin >> N >> M;
	cout << ((N-M)*100+M*1900)*pow(2,M) << endl;
}