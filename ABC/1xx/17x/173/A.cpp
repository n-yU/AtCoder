#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int N;
	cin >> N;
	cout << ((N%1000==0) ? 0 : 1000-N%1000) << endl;
}