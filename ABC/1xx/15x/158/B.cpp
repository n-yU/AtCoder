#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll N,A,B,r;
	cin >> N >> A >> B;

	r = N/(A+B) * A;
	r += min(A,N%(A+B));
	cout << r << endl;
}