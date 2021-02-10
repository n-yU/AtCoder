#include <bits/stdc++.h>
using namespace std;

int main() {
	double r=0,s,e;

	cin >> s >> e;
	r += s*(e/10);
	cin >> s >> e;
	r += s*(e/10);
	cin >> s >> e;
	r += s*(e/10);

	cout << r << endl;
}