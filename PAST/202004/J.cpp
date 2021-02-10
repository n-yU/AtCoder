#include <bits/stdc++.h>
using namespace std;

int p=0;
string S;

string kaisekiman() {
	string x="",t;

	++p;
	while(p<S.size() && S.at(p)!=')')
		if(S.at(p) != '(')
			x += S.at(p++);
		else
			x += kaisekiman();
	++p;

	t = x;
	reverse(t.begin(), t.end());
	return x+t;
}

int main() {
	string r="";
	cin >> S;

	while(p < S.size())
		if(S.at(p) != '(')
			r+=S.at(p++);
		else
			r += kaisekiman();

	cout << r << endl;
}