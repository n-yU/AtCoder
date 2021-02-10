#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  map<char,int> m;
  cin >> S;

  for(char c : S)
    if(m.count(c))
      m[c]++;
    else
      m[c]=0;

  if(m.size()==2 && m[S[0]]==1)
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
