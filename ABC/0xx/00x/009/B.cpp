#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,A,x;
	cin >> N;
	priority_queue<int> p;

	rep(i,N) {
		cin >> A;
		p.push(A);
	}

	x = p.top();
	while(p.top() == x)
		p.pop();
	cout << p.top() << endl;
}