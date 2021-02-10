#include <bits/stdc++.h>
using namespace std;

int main() {
	shared_ptr<int> p3;
	{
		shared_ptr<int> p1 = make_shared<int>(123);
		{
			shared_ptr<int> p2 = p1;
			*p2 += 1;
			p3 = p2;
		}
		*p1 += 1;
	}
	*p3 += 1;
	cout << *p3 << endl;
}