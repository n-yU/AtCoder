#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,i,c=0;
  int o[6] = {500, 100, 50, 10, 5, 1};
  cin >> n;

  for(i=0; i<6; ) {
    if(n+o[i]<=1000) {
      n+=o[i];
      c++;
      continue;
    }
    if(n==1000)
      break;
    i++;
  }

  cout << c << endl;
}
