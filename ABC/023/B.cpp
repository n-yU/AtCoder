#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,r=-1;
	string S,t="b";
	cin >> N >> S;

	rep(i,100) {
		if(t == S) {
			r = i;
			break;
		}

		if(i%3 == 0) {
			t += 'c';
			reverse(t.begin(), t.end());
			t += 'a';
		} else if(i%3 == 1) {
			t += 'a';
			reverse(t.begin(), t.end());
			t += 'c';
		} else {
			t += 'b';
			reverse(t.begin(), t.end());
			t += 'b';
		}
		reverse(t.begin(), t.end());
	}

	cout << r << endl;
}