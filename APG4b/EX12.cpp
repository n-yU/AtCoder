#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int sum = 1;
  for(int i=0; i<S.size()-1; i++) {
    if(S.at(++i) == '+')
      sum++;
    else
      sum--;
  }
  cout << sum << endl;
}