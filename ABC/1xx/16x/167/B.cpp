#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B,C,K;
	cin >> A >> B >> C >> K;
	cout << min(A,K)-min(C,max(0,K-A-B)) << endl;
}