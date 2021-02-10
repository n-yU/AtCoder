#include <bits/stdc++.h>
using namespace std;

int main() {
  int i,l=10,ln=5,t=0;
  vector<int> d(5);
  for(i=0; i<5; i++) {
    cin >> d.at(i);
    if(d.at(i)%10<l && d.at(i)%10!=0) {
      l=d.at(i)%10;
      ln=i;
    }
  }

  for(i=0; i<5; i++)
    if(i==ln)
      t+=d.at(i);
    else
      if(d.at(i)%10!=0)
        t+=10*(d.at(i)/10+1);
      else
        t+=d.at(i);

  cout << t << endl;
}
