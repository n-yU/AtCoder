#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, D, c=0, i, j;
  cin >> M >> D;
  for(i=4; i<=M; i++)
    for(j=2; j<=D; j++)
      if(j%10>=2 && j/10>=2 && i==(j%10)*(j/10))
        c++;

  cout << c << endl;
}
