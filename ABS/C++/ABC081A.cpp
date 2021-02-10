#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n=0;
  cin >> s;

  for(char c : s)
   	if(c=='1')
      n++;

  cout << n << endl;
}
