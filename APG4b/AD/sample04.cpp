#include <bits/stdc++.h>
using namespace std;

int number = 10;

void change() {
	number = 5;
}

int main() {
	cout << number << endl;
	change();
	cout << number << endl;
}