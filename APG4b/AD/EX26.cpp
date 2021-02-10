#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

void print_vec(vector<int> vec) {
	cout << "[ ";
	rep(i,vec.size())
		cout << vec.at(i) << " ";
	cout << "]" << endl;
}

int main() {
	int N;
	cin >> N;
	map<char,int> vn;
	map<char,vector<int>> vvn;

	rep(i,N) {
		string cm;
		vector<char> cs;
		char c;
		cin >> cm >> c;

		while(c != ';') {
			cs.push_back(c);
			cin >> c;
		}

		if(cm == "int") {
			char tn=cs.at(0), s='+';
			if(!vn.count(tn))
				vn[tn] = 0;
			
			rep(j,cs.size()-2)
				if(isdigit(cs.at(j+2)))
					vn.at(tn) += s=='+' ? cs.at(j+2)-'0' : -cs.at(j+2)+'0';
				else if(vn.count(cs.at(j+2)))
					vn.at(tn) += s=='+' ? vn.at(cs.at(j+2)) : -vn.at(cs.at(j+2));
				else
					s = cs.at(j+2);
		} else if(cm == "print_int") {
			int t = 0;
			char s = '+';

			rep(j,cs.size())
				if(isdigit(cs.at(j)))
					t += s=='+' ? cs.at(j)-'0' : -cs.at(j)+'0';
				else if(vn.count(cs.at(j)))
					t += s=='+' ? vn.at(cs.at(j)) : -vn.at(cs.at(j));
				else
					s = cs.at(j);
			cout << t << endl;
		} else if(cm == "vec") {
			int p=2, m=0, pp;
			char s='+';
			vector<int> t;

			if(vvn.count(cs.at(p))) {
				rep(j,vvn.at(cs.at(p)).size())
					t.push_back(vvn.at(cs.at(p)).at(j));
				++p;
			} else {
				while(cs.at(p) != ']') {
					if(isdigit(cs.at(p)))
						t.push_back(cs.at(p)-'0');
					else if(vn.count(cs.at(p)))
						t.push_back(vn.at(cs.at(p)));
					++p;
				}
			}

			rep(j,cs.size()-p) {
				if(cs.at(j+p)=='+' || cs.at(j+p)=='-') {
					s = cs.at(j+p);
				} else if(cs.at(j+p) == '[') {
					m = 1;
					pp = 0;
				} else if(cs.at(j+p) == ']') {
					m = 0;
				} else {
					if(m == 0) {
						rep(k,vvn.at(cs.at(j+p)).size())
							if(s == '+')
								t.at(k) += vvn.at(cs.at(j+p)).at(k);
							else
								t.at(k) -= vvn.at(cs.at(j+p)).at(k);
					} else {
						if(isdigit(cs.at(j+p))) {
							if(s == '+')
								t.at(pp++) += cs.at(j+p)-'0';
							else
								t.at(pp++) -= cs.at(j+p)-'0';
						} else if(vn.count(cs.at(j+p))) {
							if(s == '+')
								t.at(pp++) += vn.at(cs.at(j+p));
							else
								t.at(pp++) -= vn.at(cs.at(j+p));
						}
					}
				}
			}

			if(!vvn.count(cs.at(0))) {
				vvn[cs.at(0)] = vector<int>(0);
				rep(j, t.size())
					vvn.at(cs.at(0)).push_back(t.at(j));
			} else
				rep(j,t.size())
					vvn.at(cs.at(0)).at(j) = t.at(j);
		} else {
			int p=0, m=0, pp;
			char s;
			vector<int> t;

			if(vvn.count(cs.at(0))) {
				rep(j,vvn.at(cs.at(0)).size())
					t.push_back(vvn.at(cs.at(0)).at(j));
				++p;
			} else {
				while(cs.at(p) != ']') {
					if(isdigit(cs.at(p)))
						t.push_back(cs.at(p)-'0');
					else if(vn.count(cs.at(p)))
						t.push_back(vn.at(cs.at(p)));
					++p;
				}
			}

			rep(j,cs.size()-p) {
				if(cs.at(j+p)=='+' || cs.at(j+p)=='-') {
					s = cs.at(j+p);
				} else if(cs.at(j+p) == '[') {
					m = 1;
					pp = 0;
				} else if(cs.at(j+p) == ']') {
					m = 0;
				} else {
					if(m == 0) {
						rep(k,vvn.at(cs.at(j+p)).size())
							if(s == '+')
								t.at(k) += vvn.at(cs.at(j+p)).at(k);
							else
								t.at(k) -= vvn.at(cs.at(j+p)).at(k);
					} else {
						if(isdigit(cs.at(j+p))) {
							if(s == '+')
								t.at(pp++) += cs.at(j+p)-'0';
							else
								t.at(pp++) -= cs.at(j+p)-'0';
						} else if(vn.count(cs.at(j+p))) {
							if(s == '+')
								t.at(pp++) += vn.at(cs.at(j+p));
							else
								t.at(pp++) -= vn.at(cs.at(j+p));
						}
					}
				}
			}

			print_vec(t);
		}
	}
}