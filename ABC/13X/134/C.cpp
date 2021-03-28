#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,m1=0,m2=0;
  cin >> N;
  vector<int> A(N);
  for(i=0; i<N; i++)
    cin >> A.at(i);

  int c=0;
  for(int x : A)
    if(x>m1)
      m1 = x;
  for(int x : A) {
    if(x>m2 && x<m1)
      m2 = x;
    if(x == m1)
      c++;
  }

  if(m2==0 || c>1)
    m2 = m1;

  for(int x : A) {
    if(x != m1)
      cout << m1 << endl;
    else
      cout << m2 << endl;
  }
}
