#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,b=1,c=0; 
  cin >> N;
  vector<int> a(N);

  for(i=0; i<N; i++)
    cin >> a.at(i);
  
  for(i=0; i<N; i++) {
    c++;
    b = a.at(b-1);
    if(b == 2)
      break;
  }

  cout << ((i==N) ? -1 : c) << endl;
}