#include <bits/stdc++.h>
using namespace std;

int main() {
  int i,k;
  vector<int> a(5);
  for(i=0; i<5; i++)
    cin >> a.at(i);
  cin >> k;

  if(a.at(4)-a.at(0)<=k)
    cout << "Yay!";
  else
    cout << ":(";
  cout << endl;
}
