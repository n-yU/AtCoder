#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v = {2, 3, 1};

	sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

	cout << v.at(0) << endl;
}