#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll A,B,N,t,r;
	cin >> A >> B >> N;

	t = N/B;
	if(t*B+(B-1) <= N)
		r = t*B+(B-1);
	else
		r = max(t*B-1, 1ll);
	
	cout << max(A*r/B-A*(r/B), max(A*(N-1)/B-A*((N-1)/B), A*N/B-A*(N/B))) << endl;
}