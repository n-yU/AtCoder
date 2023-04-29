#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  set<int> a,b;

  if(x==2 && y==2)
    cout << "Yes" << endl;
  else {
    a.insert(1); a.insert(3); a.insert(5); a.insert(7); a.insert(8); a.insert(10); a.insert(12);
    b.insert(4); b.insert(6); b.insert(9); b.insert(11);
    if((a.count(x) && a.count(y)) || (b.count(x) && b.count(y)))
      cout << "Yes";
    else
      cout << "No";
    cout << endl;
  }
}
