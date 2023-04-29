#include <bits/stdc++.h>
using namespace std;

int main() {
	string S,T;
	cin >> S >> T;

	if(S.size()+1==T.size() && S==T.substr(0,S.size()))
		cout << "Yes";
	else
		cout << "No";
	cout << endl;	
}