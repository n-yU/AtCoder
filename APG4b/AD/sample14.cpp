#include <bits/stdc++.h>
using namespace std;

int main() {
	int max_num = 0;

	auto get_max = [&](int n) {
		if(max_num < n)	
			max_num = n;
		return max_num;
	};

	cout << get_max(5) << endl;
	cout << get_max(2) << endl;
	cout << get_max(10) << endl;
	cout << get_max(4) << endl;
}