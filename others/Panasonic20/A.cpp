#include <bits/stdc++.h>
using namespace std;

int main() {
	int p;
	int K[32] = {1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};
	cin >> p;
	cout << K[p-1] << endl;
}