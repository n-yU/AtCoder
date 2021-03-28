#include <bits/stdc++.h>
using namespace std;

int main() {
  int L,R,i,j,m=2018;
  cin >> L >> R;

  if(R-L>=2018)
    cout << 0 << endl;
  else {
    R %= 2019;
    L %= 2019;
    for(i=L; i<R; i++)
      for(j=i+1; j<=R; j++)
        m = min((i*j)%2019, m);
        if(m == 0) {
          cout << 0 << endl;
          return 0;
        }
    cout << m << endl;
  }
}
