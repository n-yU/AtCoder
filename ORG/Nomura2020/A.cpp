#include <bits/stdc++.h>
using namespace std;

int main() {
	int H1,M1,H2,M2,K,t1,t2,t;
	cin >> H1 >> M1 >> H2 >> M2 >> K;

	t1 = H1*60+M1;
	t2 = H2*60+M2;

	if(t2 >= t1)
		t = t2-t1;
	else
		t = (1440-t1)+t2;

	cout << t-K << endl;
}