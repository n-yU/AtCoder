#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,c=0;
	string w;
	cin >> N;

	rep(i,N) {
		cin >> w;
		if(i == N-1)
			w = w.substr(0,w.size()-1);
		if(w=="TAKAHASHIKUN" || w=="Takahashikun" || w=="takahashikun")
			++c;
	}

	cout << c << endl;
}