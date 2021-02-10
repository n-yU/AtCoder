#include <bits/stdc++.h>
using namespace std;

int main() {
	uint32_t x = 1;
	uint32_t *p = nullptr;
	p = &x;
	*p = 2;
	p = nullptr;
	cout << (int)x << endl;

	if(p)
		cout << "not nullptr";
	else
		cout << "nullptr";
	cout << endl;
}