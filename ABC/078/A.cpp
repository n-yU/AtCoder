#include <bits/stdc++.h>
using namespace std;

int main() {
	char X,Y;
	cin >> X >> Y;
	if(X < Y)
		cout << "<";
	else if(X > Y)
		cout << ">";
	else
		cout << "=";
	cout << endl;
}