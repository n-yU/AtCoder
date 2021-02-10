#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string S,t1,t2,rS,rt1,rt2;
	cin >> S;
	t1 = S.substr(0,(S.size()-1)/2);
	t2 = S.substr((S.size()+3)/2-1);

	rS=S, rt1=t1, rt2=t2;
	reverse(rS.begin(), rS.end());
	reverse(rt1.begin(), rt1.end());
	reverse(rt2.begin(), rt2.end());

	if(S==rS && t1==rt1 && t2==rt2)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
}