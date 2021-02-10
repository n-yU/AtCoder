#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int N,a,c=0;
	cin >> N;
	
	rep(i,N) {
		cin >> a;
		if(i%2==0 && a%2)
			++c;
	}
	cout << c << endl;
}