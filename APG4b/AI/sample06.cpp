#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a = {8, 5, 3};
	sort(a.begin(), a.end());

	auto itr = lower_bound(a.begin(), a.end(), 5);
	if(itr == a.end())
		cout << "not found";
	else
		cout << *itr;
	cout << endl;

	itr = lower_bound(a.begin(), a.end(), 6);
	if(itr == a.end())
		cout << "not dound";
	else
		cout << *itr;
	cout << endl;
}
