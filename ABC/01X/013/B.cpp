#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	if(a < b)
		swap(a,b);
	cout << min(a-b, b-a+10) << endl;	
}