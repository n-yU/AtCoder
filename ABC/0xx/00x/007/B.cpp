#include <bits/stdc++.h>
using namespace std;

int main() {
  int i;
  string A;
  cin >> A;

  if(A.size()>1)
    for(i=0; i<A.size()-1; i++)
      cout << A.at(i);
  else if(A.at(0) != 'a')
      cout << --A.at(0);
  else
      cout << -1;
  cout << endl;
}
