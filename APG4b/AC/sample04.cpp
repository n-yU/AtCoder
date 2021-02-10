#include <bits/stdc++.h>
using namespace std;

int main() {
	for(int tmp=0; tmp<(1<<3); ++tmp) {
		bitset<3> s(tmp);
		cout << s << endl;
	}
}