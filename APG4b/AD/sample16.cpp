#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v = {2, 3, 1};

	auto comp = [](int a, int b) { return a > b; };
	sort(v.begin(), v.end(), comp);

	cout << v.at(0) << endl;
}