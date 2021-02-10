#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,r=0,p=1;
  cin >> A >> B;
  while(p<B) {
    p+=A-1;
    r++;
  }
  cout << r << endl;
}
