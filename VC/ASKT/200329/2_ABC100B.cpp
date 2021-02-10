#include <bits/stdc++.h>
using namespace std;

int main() {
	int D,N;
	cin >> D >> N;
	cout << (int)pow(100,D)*((N==100) ? N+1 : N) << endl;
}