#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	vector<string> S;
	string t;
	set<string> r;

	cin >> t;
	while(t != "") {
		S.push_back(t);
		t = "";
		cin >> t;
	}

	rep(i,S.size()) {
		vector<string> ts;
		string tt="";
		bool b = 0;
		int s=-1, sl=0;

		rep(j,S.at(i).size()) {
			if(S.at(i).at(j) == ' ')
				break;

			if(S.at(i).at(j) == '@') {
				if(b && tt!="")
					ts.push_back(tt);
				b = 1;
				tt = "";
			} else {
				if(b) {
					tt += S.at(i).at(j);
					if(j==S.at(i).size()-1 && tt!="")
						ts.push_back(tt);
				}
			}
		}

		rep(j,ts.size())
			if(ts.at(j).size() > sl) {
				s = j;
				sl = ts.at(j).size();
			}
		
		if(s != -1)
			r.insert(ts.at(s));
	}

	for(auto x : r)
		cout << x << endl;
}