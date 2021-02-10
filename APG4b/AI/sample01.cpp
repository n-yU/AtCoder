#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a = {3, 1, 5, 6, 7, 2, 4};

	auto itr1 = a.begin();
	itr1 = itr1+2;
	auto itr2 = itr1+4;

	cout << *itr1 << endl;
	cout << *itr2 << endl;
}