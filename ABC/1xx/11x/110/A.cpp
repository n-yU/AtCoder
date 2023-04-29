#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> p(3);
  cin >> p.at(0) >> p.at(1) >> p.at(2);
  sort(p.begin(), p.end());
  cout << p.at(2)*10+p.at(1)+p.at(0) << endl;
}
