#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,h,m,s;
	cin >> N;

	h = N/3600;
	m = N%3600/60;
	s = N%3600%60;

	printf("%02d:%02d:%02d", h, m, s);
}