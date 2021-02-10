#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int r=0;
	string A,B;
	cin >> A >> B;

	if(A.size() > B.size())
		r = 1;
	else if(A.size() < B.size())
		r = -1;
	else
		rep(i,A.size())
			if(A.at(i) > B.at(i)) {
				r = 1;
				break;
			} else if(A.at(i) < B.at(i)) {
				r = -1;
				break;
			}

	if(r == 1)
		cout << "GREATER";
	else if(r == -1)
		cout << "LESS";
	else
		cout << "EQUAL";
	cout << endl;
}