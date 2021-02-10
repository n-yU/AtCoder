#include <bits/stdc++.h>
using namespace std;

bool operator<(pair<int, int> l, pair<int, int> r) {
	if(l.second != r.second)
		return l.second < r.second;
	else
		return l.first < r.first;
}

bool operator>(pair<int, int> l, pair<int, int> r) { return r < l; }
bool operator<=(pair<int, int> l, pair<int, int> r) { return !(r < l); }
bool operator>=(pair<int, int> l, pair<int, int> r) { return !(l < r); }

int main() {
	pair<int, int> a = {1, 5};
	pair<int, int> b = {3, 2};
	cout << (a < b) << endl;
	cout << (a > b) << endl;
}