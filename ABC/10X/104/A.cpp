#include <bits/stdc++.h>
using namespace std;

int main() {
	int R;
	string s;
	cin >> R;

	if(R < 1200)
		s = "ABC";
	else if(R < 2800)
		s = "ARC";
	else
		s = "AGC";
	
	cout << s << endl;
}