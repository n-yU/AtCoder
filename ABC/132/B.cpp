#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,i,c=0;
  cin >> n;
  vector<int> p(n);
  for(i=0; i<n; i++)
    cin >>  p.at(i);

  for(i=0; i<n-2; i++)
    if(p.at(i+1)>min(p.at(i),p.at(i+2)) && p.at(i+1)<max(p.at(i),p.at(i+2)))
      c++;
  cout << c << endl;
}
